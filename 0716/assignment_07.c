/*Q07
길이 5의 문자열 str을 선언하세요.
str의 값은 채점 중 임의로 변경됩니다.
str의 요소 중 알파벳 소문자를 모두 대문자로 변환합니다.
str을 출력하세요.
(ex: str == "tEst\n"이면 출력은 "TEST\n")

#include <stdio.h>
int main(void)
{
    char str[] = "t";
    str[] = str[]-str[]*('a'<= str[]<='z');

    
    printf("%c\n",str[]);
    return 0;
*/

#include <stdio.h>
int main(void)
{
char str[] = "tEst";
str[0]= str[0]-32*('a'<str[0]&& str[0]<'z');
str[1]= str[1]-32*('a'<str[1]&& str[1]<'z');
str[2]= str[2]-32*('a'<str[2]&& str[2]<'z');
str[3]= str[3]-32*('a'<str[3]&& str[3]<'z');
printf("%s\n", str);
return 0;
}