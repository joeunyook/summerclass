#include <stdio.h>

struct st_st
{
	char ch;
	int cnt;
};

int main(void)
{
	struct st_st var = { 'a', 42 };
	printf("%ld\n", sizeof(struct st_st));
	return 0;
}
