/*Q00
매개변수로 문자열을 전달받는 함수를 작성하세요.
전달받은 문자열과 같은 크기의 메모리를 동적할당하세요.
할당 받은 메모리에 전달받은 문자열을 복사하여 그 포인터를 반환하세요.
함수 원형은 아래와 같습니다.

char* duplicate(const char* str)*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* duplicate(const char* str)
{
    char* dst;
    dst = (char*)malloc(strlen(str)+1);
    strcpy(dst, str);
    return dst;
}

int main(void)
{
    char* src_sentence = "my sentence";
    char* copied = duplicate(src_sentence);
    printf("Source sentence : %s\n", src_sentence);
    printf("Copied sentence : %s\n", copied);

    free(copied);
    return 0;
}



