#include <stdio.h>

void inc_and_print(const int nums[])
{
	/* (nums[0])++; it is not compilable */
	printf("%d\n", nums[0]);
	return;
}

int main(void)
{
	int arr[1] = { 42 };
	inc_and_print(arr);
	printf("%d\n", arr[0]);
	return 0;
}
