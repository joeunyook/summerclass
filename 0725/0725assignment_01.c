/*Q01
문자열 str을 선언하세요.
str의 값과 길이는 채점 중 임의로 변경됩니다.
str의 내용이 뒤집히도록 프로그램을 작성하세요.
str을 출력하세요.
(ex: str == “hello world\n”면 출력은 “\ndlrow olleh”)*/


#include <stdio.h>
int main (void)
{
    char str[] = "hello world";
    unsigned int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    int i;
    int j;
    j = len -1;

    for(i=0; i < len/2; i++, j--)
    {
        char original = str[i];
        str[i]=str[j];
        str[j]= original;
    }
    printf("%s\n", str);
    return 0;
}