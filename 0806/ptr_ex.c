#include <stdio.h>

int* add(int a, int b)
{
	int sum = a + b;
	return &sum;
}

int main(void)
{
	int a = 42;
	int* addr_of_a = &a;

	printf("val of a is %d\n", a);
	printf("addr of a is %p\n", addr_of_a);
	printf("Indirection of addr_of_a is %d", *addr_of_a);

	int* addr_of_sum1 = add(3, 4);
	int* addr_of_sum2 = add(5, 7);

	printf("Indirection of addr_of_sum1 is %d\n", *addr_of_sum1);
	printf("Indirection of addr_of_sum2 is %d\n", *addr_of_sum2);
	return 0;
}
