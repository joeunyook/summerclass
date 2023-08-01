#include <stdio.h>


void cnt_and_print(void)
{
	static int cnt = 0;
	cnt++;
	printf("call %d times\n", g_cnt);
	return;
}

int main(void)
{
	cnt_and_print();
	cnt_and_print();
	cnt_and_print();
	cnt_and_print();
	cnt_and_print();
	cnt_and_print();
	return 0;
}
