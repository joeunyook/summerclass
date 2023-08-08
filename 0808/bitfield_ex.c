#include <stdio.h>

typedef struct st_flag
{
	char isUpper : 1;
	char isHex : 1;
	char isEncrypted : 1;
} flag_t;

void my_print(const char* str, const flag_t flags)
{
	while (*str)
	{
		char c = *str;
		if (flags.isUpper)
		{
			if (c >= 'a' &&  c <= 'z')
			{
				c -= 32;
			}
			printf("%c", c);
		}
		++str;
	}
	printf("\n");
	return;
}

int main(void)
{
	flag_t flags;
	flags.isUpper = 1;
	flags.isHex = 0;
	flags.isEncrypted = 0;
	my_print("hello", flags);
	return 0;
}
