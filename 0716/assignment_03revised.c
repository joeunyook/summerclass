/*Q03
unsigned char형 변수 num을 선언하세요.
num의 값을 2자리 16진법 표기로 출력합니다.
형식지정자 %c, %s만 사용할 수 있습니다.
num의 값은 채점 중 임의로 변경됩니다.
(ex: num == 42일 때 출력은 "2A\n")*/

#include <stdio.h>
int main(void)
{
    unsigned char num = 163;
    unsigned char hexdigit = num / 16;
    unsigned char onedigit = num % 16;
    char list[] = "0123456789ABCDEF";
    printf("%c%c\n", list[hexdigit], list[onedigit] );
    return 0;
}