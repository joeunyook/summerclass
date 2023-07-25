#include <stdio.h>

int main(void)
{
	int num = -41;
	char strs[2][100] =
	{
		"This is a positive num.",
		"This is a negative num."
	};
	int index = num < 0;
	printf("%s\n", strs[index]);
	return 0;
}
