/*Q04
0부터 99까지 한줄에 하나의 수를 출력하는 프로그램을 작성하세요.
단, 3의 배수는 수 대신 “Fizz”를 5의 배수는 수 대신 “Buzz”를 출력합니다.
3, 5의 공배수는 “FizzBuzz”를 출력합니다.
ex_04.out을 참고하세요.*/

#include <stdio.h>
int main(void)
{
    for(int i=0; i<=99; i++)
    {
        if(i % 3==0 && i % 5==0)
        {
        printf("Fizzbuzz\n");
        }

        else if(i% 3 == 0)
        {
            printf("Fizz\n");
        }

        else if(i%5 == 0)
        {
        printf("Buzz\n");
        }
        else 
        printf("%d\n",i);
    
    }
    return 0;


}