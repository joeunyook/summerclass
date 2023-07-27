#include <stdio.h>

enum e_country
{
	USA = 4,
	CANADA = 0,
	KOREA,
	JAPAN
};

enum color
{
	RED = 0,
	BLUE = 1,
	GREEN = 3
};

int main(void)
{
	enum e_country nationality = KOREA;

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

	printf("%d\n", nationality);
	switch (nationality)
	{
		case USA:
		case CANADA:
			printf("hello world\n");
			break;
		case KOREA:
			printf("annyeonghaseyo\n");
			break;
		case JAPAN:
			printf("ohayo\n");
			break;
		default:
			printf("Where are you from?\n");
			break;
	}
	return 0;
}
