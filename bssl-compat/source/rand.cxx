/*
 * Copyright (c) 2022 Intel Corporation
 * SPDX-License-Identifier: Apache-2.0
 */

#include "bssl_compat/bssl_compat.h"
#include <stdio.h>

namespace openssl {
#include <openssl/rand.h>
}

OPENSSL_EXPORT int RAND_bytes(uint8_t *buf, size_t len) {

	printf("We're in %s\n", __FUNCTION__);
	if (openssl::RAND_bytes((unsigned char *)buf, (int)len) <= 0)
		return 0;

	return 1;
}
