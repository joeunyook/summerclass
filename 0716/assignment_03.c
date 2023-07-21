/*Q03
unsigned char형 변수 num을 선언하세요.
num의 값을 2자리 16진법 표기로 출력합니다.
형식지정자 %c, %s만 사용할 수 있습니다.
num의 값은 채점 중 임의로 변경됩니다.
(ex: num == 42일 때 출력은 "2A\n")*/

#include <stdio.h>
int main(void)

{
    unsigned char num = 42;
    char number = '0'+ num/16;
    num = num % 16;
    char alphabet = num + 55;
    printf("%c%c\n",number, alphabet);
    return 0;
}