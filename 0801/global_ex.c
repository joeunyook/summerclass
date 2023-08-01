#include <stdio.h>

int g_num = 42;

void fn(void)
{
	g_num = 52;
	printf("%d\n", g_num);
	return;
}

int main(void)
{
	g_num = 3;
	fn();
	printf("%d\n", g_num);
	return 0;
}
