#include <stdio.h>

void print_four(void)
{
	printf("=====================================\n");
	printf("==============|======================\n");
	printf("===========|==|======================\n");
	printf("===========|--+--====================\n");
	printf("==============|======================\n");
	printf("=====================================\n");
	return;
}

int main(void)
{
	print_four();
	printf("\n");
	print_four();
	printf("\n");
	print_four();
	return 0;
}
