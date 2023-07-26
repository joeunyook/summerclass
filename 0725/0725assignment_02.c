/*Q02
문자열 num_str을 선언하세요.
num_str의 값과 길이는 채점 중 임의로 변경됩니다.
단, num_str의 값이 10진법으로 표기된 부호 없는 정수형 수임을 보장합니다.
num_str이 나타내는 값이 65535 이하임을 보장합니다.
적절한 자료형을 선택해 변수 num을 선언하세요.
num_str을 num에 변환하세요.
num을 출력하세요.
(ex: hex_str == “255”면 출력은 “255\n”)*/

#include <stdio.h>
int main(void)
{
    char num_str[] = "255";
    
    unsigned int len = 0;
    while (num_str[len] != '\0')
    {
        len++;
    }
    unsigned int num = 0;
    for(int i=0; i < len; i++)
    {
        num = num*10 + (num_str[i] - '0');
    }
    printf("%d\n", num);
    return 0;
}