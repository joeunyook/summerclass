#include <stdio.h>

static const char g_hex_base[] = "0123456789abced";

void print_signed_hex(int num);

int main(void)
{
	unsigned int num = 21;
	int signed_num = -42;
	unsigned int hex_digit = num / 16;
	unsigned int one_digit = num % 16;
	char hex_digit_c = g_hex_base[hex_digit];
	char one_digit_c = g_hex_base[one_digit];
	printf("%c%c\n", hex_digit_c, one_digit_c);
	print_signed_hex(signed_num);
	return 0;
}
