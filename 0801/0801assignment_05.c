/*Q05
인자로 전달된 문자열 src를 dst에 복사하는 함수를 작성하세요.
단 dst의 크기는 언제나 src 이상임을 보장합니다.
src의 원본이 손상되어서는 안됩니다.
함수 원형은 아래와 같습니다.

void copy(char dst[], const char src[], size_t len)


#include <stdio.h>

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

int main(void)
{
    char src[] = "Almost done";
    char dst[100];
    printf("%s\n", copy(src, dst));
}
*/

#include <stdio.h>

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

int main(void)
{
    char src[] = "Almost done";
    char dst[100];
    copy (dst, src);
    printf("%s\n", src);
    return 0;
}