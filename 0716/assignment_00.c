

/*int형 변수 num을 선언하세요.
num이 홀수이면 "This num is an odd number\n", 
	짝수이면 "This num is an even number\n"를 출력합니다.
num의 값은 채점 중 임의로 변경됩니다.
#include <stdio.h>


*/

#include <stdio.h>

int main(void) 
{
    int num = 3;

    if (num % 2 == 0) 
         printf("This num is an even number\n");
    
    else 
        printf("This num is an odd number\n");
    

    return 0;
}

