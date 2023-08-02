/*
Q03
인자로 전달된 문자열 str의 길이를 반환하는 함수를 작성하세요.
str의 원본이 손상되어서는 안 됩니다.
함수 원형은 아래와 같습니다.

size_t get_len(const char str[])*/

#include <stdio.h>
size_t get_len(const char str[])
{
    size_t len = 0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}

int main(void)
{
    const char str1[] = "how long is this";
    printf("%lu\n",get_len(str1));
    return 0;
}