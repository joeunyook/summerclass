#include <stdio.h>

int main(void)
{
	const int usa = 0;
	const int canada = 1;
	const int korea = 2;
	const int japan = 3;

	int nationality = canada;

	/*
	if (nationality == usa)
	{
		printf("hello world\n");
	}
	else if (nationality == canada)
	{
		printf("hello world\n");
	}
	else if (nationality == korea)
	{
		printf("annyeonghaseyo\n");
	}
	else if (nationality == japan)
	{
		printf("ohayo\n");
	}
	else
	{
		printf("Where are you from?\n");
	}
	*/

	switch (nationality)
	{
		case 0:
		case 1:
			printf("hello world\n");
			break;
		case 2:
			printf("annyeonghaseyo\n");
			break;
		case 3:
			printf("ohayo\n");
			break;
		default:
			printf("Where are you from?\n");
			break;
	}
	return 0;
}
