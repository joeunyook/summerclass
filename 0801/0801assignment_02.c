/*Q02
인자로 전달된 c가 ASCII 코드로 공백 문자를 나타내면 1, 아니면 0을 반환하는 함수를 작성하세요.
(공백 문자에 대해서는 https://learn.microsoft.com/en-us/cpp/c-language/white-space-characters?view=msvc-170 와 man ascii 를 참고하세요)
함수 원형은 아래와 같습니다.*/

#include <stdio.h>
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