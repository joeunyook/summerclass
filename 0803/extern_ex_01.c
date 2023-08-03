#include <stdio.h>
#include "extern_ex.h"

const char g_hex_base[] = "0123456789abced";

void print_signed_hex(int num)
{
	if (num < 0)
	{
		num *= -1;
		printf("-");
	}
	char hex = g_hex_base[num / 16];
	char one = g_hex_base[num % 16];
	printf("%c%c\n", hex, one);
}
