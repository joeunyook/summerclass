#include <stdio.h>

int f(int x, int y)
{
	return x + y;
}

int main(void)
{
	int a = 42;
	int b = 4;
	int c = 2;
	int d = 22;
	int sums[2];
	sums[0] = f(a,b);
	sums[1] = f(c,d);
	printf("%d\n", sums[0]);
	printf("%d\n", sums[1]);
	return 0;
}
