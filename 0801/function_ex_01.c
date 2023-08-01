#include <stdio.h>

size_t get_length(char str[])
{
	size_t i = 0;
	size_t len = 0;
	while (str[i] != '\0')
	{
		++len;
		++i;
	}
	return len;
}

int is_equal(char str1[], char str2[])
{
	return 0;
}

int main(void)
{
	char str0[] =	"This is first string";
	char str1[] =	"I'm second one";
	printf("str[0]'s len: %ld\n",get_length(str0));
	printf("str[0]'s len: %ld\n",get_length(str1));
	return 0;
}
