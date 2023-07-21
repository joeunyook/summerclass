/*Q04
short형 변수 num을 선언하세요.
num의 값을 5자리 10진법 표기로 출력합니다.
부호를 반드시 표기합니다.
형식지정자 %c, %s만 사용할 수 있습니다.
num의 값은 채점 중 임의로 변경됩니다.
단, num의 값이 short으로 표현 가능한 최솟값은 아님을 보장합니다.
(ex: num == 42일 때 출력은 "+00042\n")*/

#include <stdio.h>
int main(void)

{
    short num = 42;
    if (num >= 0)
    {   short sign = 43;
        short digit1 = '0'+ num / 10000;
        num = num % 10000;
        short digit2 = '0'+ num / 1000;
        num = num % 1000;
        short digit3 = '0'+ num /100;
        num = num % 100;
        short digit4 = '0'+ num /10;
        num = num % 10;
        short digit5 = '0'+ num;
        printf("%c%c%c%c%c%c\n", sign, digit1, digit2, digit3, digit4, digit5);
    }
     if (num<0)
     {
        short asign = 45;
        num = -num;
        short adigit1 = '0'+ num / 10000;
        num = num % 10000;
        short adigit2 = '0'+ num / 1000;
        num = num % 1000;
        short adigit3 = '0'+ num /100;
        num = num % 100;
        short adigit4 = '0'+ num /10;
        num = num % 10;
        short adigit5 = '0'+ num;
        printf("%c%c%c%c%c%c\n", asign, adigit1, adigit2, adigit3, adigit4, adigit5);

     }


}