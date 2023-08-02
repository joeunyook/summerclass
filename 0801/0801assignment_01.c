/*Q01
인자로 전달 된 c가 ASCII 코드로 숫자를 나타내면 1, 아니면 0을 반환하는 함수를 작성하세요.
함수 원형은 아래와 같습니다.

int is_digit(char c)*/

#include <stdio.h>
int is_digit(char c)
{
    if('0'<=c && c<='9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


