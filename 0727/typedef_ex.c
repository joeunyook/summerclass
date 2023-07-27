#include <stdio.h>
/*
enum e_country
{
	USA = 4,
	CANADA = 0,
	KOREA,
	JAPAN
};

typedef enum e_country country_t;
*/

typedef enum
{
	USA = 4,
	CANADA = 0,
	KOREA,
	JAPAN
} country_t;

int main(void)
{
	country_t nationality = KOREA;

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
