#include <stdio.h>

int main(void)
{
	int arr[3][3] = {
		{0, },
		{0, },
		{0, }
	};

	int (*ptr)[3] = arr;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d ", ptr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
