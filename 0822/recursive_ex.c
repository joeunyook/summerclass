#include <stdio.h>

unsigned int factorial_recursive(unsigned int num)
{
	if (num == 0)
	{
		return 1;
	}
	return num * factorial_recursive(num - 1);
}

unsigned int fibonachi_recursive(unsigned int term)
{
	if (term == 1 || term == 0)
	{
		return 1;
	}
	return fibonachi_recursive(term - 2) + fibonachi_recursive(term - 1);
}

unsigned int getGcdRecursive(unsigned int bigNum, unsigned int smallNum)
{
	unsigned int r = bigNum % smallNum;
	if (r == 0)
	{
		return smallNum;
	}
	return getGcdRecursive(smallNum, r);
}

unsigned int getGcd(unsigned int num1, unsigned int num2)
{
	unsigned int bigNum = num1;
	unsigned int smallNum = num2;
	if (num1 < num2)
	{
		bigNum = num2;
		smallNum = num1;
	}
	return getGcdRecursive(bigNum, smallNum);
}

// 1, 1, 2, 3, 5, 8, 13...

int main(void)
{
	printf("%u\n", factorial_recursive(3));
	printf("%u\n", fibonachi_recursive(2147483647));

	while (1)
	{
		//...
		//
		//
	}
	return 0;
}
