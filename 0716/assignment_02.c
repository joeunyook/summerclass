/*Q02
unsigned char형 변수 num을 선언하세요.
num의 값을 3자리 10진법 표기로 출력합니다.
형식지정자 %c, %s만 사용할 수 있습니다.
num의 값은 채점 중 임의로 변경됩니다.
(ex: num == 42일 때 출력은 "042\n")*/



#include <stdio.h>

int main(void)
{
    unsigned char num = 42;
    char hundred = '0' + num / 100;
    num = num % 100;
    char ten = '0'+ num/10;
    num = num % 10;
    char one = '0'+num;
    printf("%c%c%c\n", hundred, ten, one);
    return 0;
    
}



