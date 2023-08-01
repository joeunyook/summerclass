#include <stdio.h>

void inc_and_print(int num);

int main(void)
{
	int a = 42;
	inc_and_print(a);
	printf("%d\n", a);
	return 0;
}

void inc_and_print(int num)
{
	++num;
	printf("%d\n", num);
	return;
}
