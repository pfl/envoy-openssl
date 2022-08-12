#include "bssl_compat/openssl/rand.h"

//#include <openssl/rand.h>

#include <stdio.h>
#include <stdint.h>

int main (void) {
	int r, i;
	uint8_t buf[16] = { 0 };

	r = RAND_bytes(buf, sizeof(buf));
	printf("RAND_bytes returned %d: ", r);

	for (i = 0; i < sizeof(buf); i++)
		printf("%0x ", buf[i]);

	printf("\n");

	return 1;
}
