/*문자열 str을 선언하세요.
str의 값과 길이는 채점 중 임의로 변경됩니다.
unsigned int형 변수 len을 선언하세요.
len의 값이 str의 길이가 되도록 프로그램을 작성하세요.
len을 출력하세요*/

#include <stdio.h>
int main(void)
{
    char str[] = "random sentence";
    unsigned int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    printf("%d\n", len);
    return 0;
}
