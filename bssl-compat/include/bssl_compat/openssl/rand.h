/* Copyright (c) 2014, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

#ifndef BSSL_COMPAT_HEADER_RAND_H
#define BSSL_COMPAT_HEADER_RAND_H

#include <bssl_compat/bssl_compat.h>

#if defined(__cplusplus)
extern "C" {
#endif

// RAND_bytes writes |len| bytes of random data to |buf| and returns one.
OPENSSL_EXPORT int RAND_bytes(uint8_t *buf, size_t len);

#if defined(__cplusplus)
}  // extern C
#endif

#endif  // OPENSSL_HEADER_RAND_H
