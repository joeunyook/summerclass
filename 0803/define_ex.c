#include <stdio.h>

#define SUM(a, b) (a + b)
#define SWAP(a, b) 
#define STR "i got some input\n"

int main(void)
{
	int x;
	int y;
	scanf("%d %d", &x, &y);
	printf(STR);
	printf("%d\n", SUM(x, y) * 2);
	return 0;
}
