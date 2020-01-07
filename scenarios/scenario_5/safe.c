#include <string.h>
#include <assert.h>

// concatenate a and b in c. Overflow safe.
void memcat(void *a, void *b, void *c, size_t a_len, size_t b_len, size_t c_len) {

	assert(a_len + b_len < c_len); // Prevent overflows. Make sure the data actually fits in c

	memcpy(c, a, a_len);

	memcpy((char*)c + a_len, b, b_len);
}

