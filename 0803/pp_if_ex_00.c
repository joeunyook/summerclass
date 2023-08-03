#include <stdio.h>

#define FIRE 0
#define WATER 1
#define GRASS 3

#define VERSION FIRE

int main(void)
{
	printf("Your starting pokemon is... ");
#if (VERSION == FIRE)
	//block 1
	printf("pairi!");
#elif (VERSION == WATER)
	//block 2
	printf("kkobugi!");
#else
	//block 3
	printf("ssi!");
#endif
	printf("\n");
	//it is not if block anymore
}
