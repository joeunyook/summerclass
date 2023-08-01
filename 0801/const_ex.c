#include <stdio.h>

void print_num(const int num)
{
	/* num = 42;  It is not compilable */
	printf("%d\n", num);
	return;
}

int main(void)
{
	print_num(0);
	print_num(1);
	print_num(2);
	print_num(4);
	print_num(3);
	return 0;
}
