#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ERR 1

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		printf("Wrong arg\n");
		return ERR;
	}
	const char* src_str = argv[1];
	char* dst;

	dst = (char*)malloc(strlen(src_str) + 1);
	char dummy_dst[11];
	strcpy(dst, src_str);

	char* ptr = dst;
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		++ptr;
	}

	printf("%s\n", src_str);
	printf("%s\n", dst);
	
	free(dst);
	dst = 0:
	return 0;
}
