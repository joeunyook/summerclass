
/*int형 변수 num을 선언하세요.
num이 홀수이면 "This num is an odd number\n", 
	짝수이면 "This num is an even number\n"를 출력합니다.
num의 값은 채점 중 임의로 변경됩니다.*/


#include <stdio.h>
int main(void)
{
    int num = 21;
    char strs[2][30]=
    {
        "This num is an odd number",
        "This num is an even number"
    };
    int index = (num % 2 == 0);
    
    printf("%s\n", strs[index]);
    return 0;
}
