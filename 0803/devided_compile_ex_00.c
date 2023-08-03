#include <stdio.h>
#include "devided_compile_ex_01.h"

int main(void)
{
	const char str[] = "hi, it's wonderful world";
	printf("str's len is %lu", my_strlen(str));
	return 0;
}
