/*Q00
원을 나타내는 타입을 정의하세요.
위에서 정의한 타입의 매개변수를 둘 전달받아 두 원이 겹치는지 검사하고 참이면 1, 거짓이면 0을 반환하는 함수를 작성하세요.
함수 원형은 아래와 같습니다

int is_overlapped(circle_t c1, circle_t c2)*/
#include <stdio.h>
#include "assignment_00.h"
int is_overlapped(circle_t c1, circle_t c2)
{
    int horiz_diff = c1.x - c2.x;
    int vertic_diff = c1.y - c2.y;
    int distance_square = horiz_diff * horiz_diff + vertic_diff * vertic_diff;
    int radii = c1.radius + c2.radius;

    if(distance_square >= radii*radii)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main(void)
{
    circle_t c1 = {0,0,2};
    circle_t c2 = {0,0,4};
    printf("%d\n",is_overlapped(c1, c2));
    return 0;

}