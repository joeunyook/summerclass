/*Q00
지난시간 만든 함수들을 assignment00.c에 정의하세요.
assignment.c를 object file로 컴파일하여 assignment.o를 만드세요.
다른 파일에에서 assignment.o의 함수들을 사용 할 수 있도록 헤더 assignment.h를 작성하세요.
채점 중 사용되는 파일의 첫 두 줄은 아래와 같습니다.
1: #include "assignment.h"
2: #include "assignment.h"*/

#include <stdio.h>
int is_alphabet(char c)
{
    if((c>=65 && c<=90) || (c>=97 && c<=122))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_digit(char c)
{
    if('0'<=c && c<='9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_whitespace(char c)
{
    if(c==' '||c=='\n'||c=='\t'||c=='\r'||c=='\f'||c=='\v')
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int is_equal(const char str1[], const char str2[])
{
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i]!=str2[i])
        {
            return 0;
        }
        i++;
    }
    if(str1[i]==str2[i])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void copy(char dst[], const char src[]) 
{
    int i = 0;
    while(src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}