#include <stdio.h>

int main(void)
{
	int arr[3][3] =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (arr[i][j] == 7)
			{
				printf("I found it!\n");
				goto EXIT;
			}
		}
	}
EXIT:
	return 0;
}
