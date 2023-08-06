#include <stdio.h>

void print_num(const int * * const ptr_of_ptr)
{
	int secret = 666;
	*ptr_of_ptr = &secret;
	printf("%d\n", **ptr_of_ptr);
	printf("%p\n", *ptr_of_ptr);
	return;
}

int main(void)
{
	int a = 42;
	int* ptr = &a;
	print_num(&ptr);
	return 0;
}
