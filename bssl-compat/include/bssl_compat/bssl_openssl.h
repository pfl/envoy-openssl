/*
 * Copyright (C) 2022 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef BSSL_OPENSSL_H
#define BSSL_OPENSSL_H

#include "openssl/ossl_typ.h"
#define OSSL_ASYNC_FD int

// OpenSSL functions needed by the implementation
struct openssl_func {
	int (*RAND_bytes)(unsigned char *, int);
	int (*SSL_do_handshake)(SSL *s);
	int (*SSL_get_error)(const SSL *s, int ret_code);
	long (*SSL_ctrl)(SSL *s, int cmd, long larg, void *parg);
	int (*SSL_get_all_async_fds)(SSL *s, OSSL_ASYNC_FD *fds, size_t *numfds);
};

extern struct openssl_func openssl;

#endif
