/*Q05
char형 변수 number_character를 선언하세요.
number_character의 값은 채점 중 임의로 변경됩니다.
단, number_character >= '0' && number_character <= '9'를 보장합니다.
(ex char number_character = '3')
unsigned char형 변수 num을 선언하세요.
number_character를 변환하여 num에 대입하세요.
num을 출력하세요.
(ex: number_character == '9'면 출력은 "9\n")*/

                  
#include <stdio.h>

int main(void)
{
    char number_character = '3';
    unsigned char num; 
    num = number_character - 48;
    printf("%d\n",num);
    return 0;

}