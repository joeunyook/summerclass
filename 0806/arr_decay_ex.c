#include <stdio.h>

int get_sum(int* arr, size_t cnt)
{
	int sum=0;
	printf("%lu\n", sizeof(arr));
	for(int i =0; i < cnt; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int main(void)
{
	int arr[5] = { 0, 1, 2, 3, 4 };
	int sum = get_sum(arr, 5);
	printf("%d\n", sum);
	printf("%lu\n", sizeof(arr));
	return 0;
}
