/* @LICENSE(MUSLC_MIT) */

#include <string.h>

int strcmp(const char *l, const char *r)
{
	for (; *l==*r && *l && *r; l++, r++);
	return *(unsigned char *)l - *(unsigned char *)r;
}
