/*Q00
인자로 전달 된 c가 ASCII 코드로 알파벳을 나타내면 1, 아니면 0을 반환하는 함수를 작성하세요.
함수 원형은 아래와 같습니다.

int is_alphabet(char c)*/

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
int main(void)
{
    char random_character = 'A';
    if (is_alphabet(random_character))
    {
        printf("%c is an alphabet", random_character);
    }
    else
    {
        printf("%c is not an alphabet", random_character);
    }
    return 0;
}