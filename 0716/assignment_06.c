
/*Q06
길이 9의 문자열 str을 선언하세요.
str의 값은 채점 중 임의로 변경됩니다.
단, 9자리의 10진법 표기된 수임을 보장합니다.
(ex: char str[] = "000000042")
unsigned int형 변수 num을 선언하세요.
str을 변환하여 num에 대입하세요.
num을 출력하세요.
(ex: str == "000000042"이면 출력은 "42\n")*/

#include <stdio.h>
int main(void)
{
    char str[] = "000000042";
    unsigned int num = 0;
    num = (str[0]-'0')*100000000;
    num = num + (str[1]-'0')*10000000;
    num = num +(str[2]-'0')*1000000;
    num = num +(str[3]-'0')*100000;
    num = (num +str[4]-'0')*10000;
    num = num +(str[5]-'0')*1000;
    num = num +(str[6]-'0')*100;
    num = num +(str[7]-'0')*10;
    num = num +(str[8]-'0')*1;
    

    printf("%d\n", num);
    return 0;

}
