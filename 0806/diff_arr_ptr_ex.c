#include <stdio.h>

int main(void)
{
	char arr_str[] = "hello world\n";
	char* ptr_str = "hello world\n";

	arr_str[0] = 'H';
	printf("arr_str is ok\n");
	ptr_str[0] = 'H';
	printf("ptr_str is not ok\n");
	return 0;
}
