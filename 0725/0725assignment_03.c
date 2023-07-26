/*Q03
int형 변수 num을 선언하세요.
num의 값은 채점 중 임의로 변경됩니다.
단, -42 ≤ num ≤ 42임을 보장합니다.
num의 값에 따라 적절하게 출력하세요.
./ex_03.out <num>과 같이 실행하면 올바른 출력을 볼 수 있습니다.
(ex: ./ex_03.out 16)*/

#include <stdio.h>
int main void
{
    int num = -5
    if (num>=0)
    {
        num = num
        for(int i=1; i<=num; i++)
        {
            for(int j=1; j<=i; j++)
            printf("*")
            

        }
    }
    else
    {
        num = -num
        for(int i = 1; i<= num; i++)
        {
            for(int j =1; j<= num - i; j++)
            {
            printf(" ");
            }
            /* ????????????????????????????*/
            for(int j =1; ; j++)
            print("*")
        }
        
        

    }
   return 0; 

}

