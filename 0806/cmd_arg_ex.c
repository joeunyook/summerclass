#include <stdio.h>

int main(int argc, char** argv)
{
	for (int i = 0; i < argc; ++i)
	{
		char* str = argv[i];
		while (*str != '\0')
		{
			printf("%c", *str);
			++str;
		}
		printf("\n");
	}
	return 0;
}
