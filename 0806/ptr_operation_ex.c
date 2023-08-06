#include <stdio.h>

int main(void)
{
	int arr[] = { 0, 1 };
	int* ptr1 = &arr[0];
	int* ptr2 = &arr[1];

	printf("ptr1: %p\n", ptr1);
	printf("ptr2: %p\n", ptr2);
	printf("distance is %ld\n", ptr2 - ptr1);

	*ptr1 = 42;
	*(ptr1 + 1) = 32;

	printf("Indirection of ptr1 is %d\n", *ptr1);
	printf("arr[0] is %d\n", arr[0]);
	printf("Indirection of ptr2 is %d\n", *ptr2);
	printf("arr[1] is %d\n", arr[1]);

	int* addr_of_arr = &arr;
	printf("Indirection of (addr_of_arr + 0) is %d\n", *(addr_of_arr + 0));
	printf("arr[0] is %d\n", arr[0]);

	printf("Indirection of (addr_of_arr + 1) is %d\n", *(addr_of_arr + 1));
	printf("arr[1] is %d\n", arr[1]);

	printf("ptr2[-1] is %d\n", ptr2[-1]);
	return 0;
}
