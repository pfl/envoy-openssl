/*
 * Copyright (c) 2022 Intel Corporation
 * SPDX-License-Identifier: Apache-2.0
 */

#include "bssl_compat/bssl_compat.h"

#define __USE_GNU
#include <dlfcn.h>

int (*openssl_RAND_bytes)(unsigned char *buf, int num);

OPENSSL_EXPORT int RAND_bytes(uint8_t *buf, size_t len) {

	if (!openssl_RAND_bytes) {
		openssl_RAND_bytes = (int(*)(unsigned char *, int))
			(dlsym (RTLD_NEXT, "RAND_bytes"));

		if (!openssl_RAND_bytes)
			return 0;
	}

	if (openssl_RAND_bytes((unsigned char *)buf, (int)len) <= 0)
		return 0;

	return 1;
}
