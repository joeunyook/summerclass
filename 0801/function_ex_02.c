#include <stdio.h>

int fn(int a, int b, int c)
{
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	return 0;
}

int main(void)
{
	int a = 0;
	fn(a++, a++, a++);
	return 0;
}
