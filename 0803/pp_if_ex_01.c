#include <stdio.h>

#define IS_MAC

int main(void)
{
	const unsigned long num = 42;
#if (!(defined IS_MAC))
	printf("%lu\n", num);
#else
	printf("%U\n", num);
#endif
}
