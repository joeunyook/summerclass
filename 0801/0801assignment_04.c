/*Q04
인자로 전달된 두 문자열 str1, str2가 같으면 1, 다르면 0을 반환하는 함수를 작성하세요.
원본이 손상되어서는 안됩니다.
함수 원형은 아래와 같습니다.

int is_equal(const char str1[], const char str2[])*/

#include <stdio.h>

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

int main(void)
{
    char str1[]= "coding is fun";
    char str2[]= "coding is not fun";
    printf("%d\n", is_equal(str1, str2));
    return 0;
}