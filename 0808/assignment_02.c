/*Q02
두 정수를 사용해 유리수를 나타내는 타입을 정의하세요. (하나는 분자 하나는 분모)
두 유리수의 곱을 반환하는 함수를 작성하세요.
단, 반환 된 유리수의 분자, 분모는 서로소여야 합니다.
단, 분모로 0을 사용하는 등 올바르지 않은 인자가 전달되면 0/0을 반환합니다.
함수 원형은 아래와 같습니다.

ratio_t multiply(ratio_t a, ratio_t b)*/

#include <stdio.h>
#include "assignment_02.h"


ratio_t multiply(ratio_t a, ratio_t b)
 {
    if (a.denominator == 0 || b.denominator == 0)
    {
    
        return (ratio_t){0,0}; 
    }

    ratio_t result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;

 
    int a_initial = result.numerator;
    int b_initial = result.denominator;
    
    while (b_initial != 0)
    {
    
        b_initial = a_initial % b_initial;
        a_initial = 
    }
    int common_denominator  ;

   
    result.numerator /= common_denominator;
    result.denominator /= common_denominator;

    return result;
}

int main() 
{
    ratio_t a = {10, 4};
    ratio_t b = {3, 5};
    ratio_t result = multiply(a, b);
    
    printf("Result: %d/%d\n", result.numerator, result.denominator);
    return 0;
}
