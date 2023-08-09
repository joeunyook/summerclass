/*Q01
위 문제에서 정의한 타입을 사용합니다.
매개변수로 전달된 원의 원본을 평행 이동 시키는 함수를 작성합니다.
함수 원형은 아래와 같습니다.

void move(circle_t* c, int dx, int dy)*/

#include <stdio.h>
#include "assignment_01.h"

void move(circle_t *c, int dx, int dy)
{
    (*c).x += dx;
    (*c).y += dy;
}

int main(void)
{
    circle_t c = {0,0,2};
    move(&c, 3, 4);
    printf("center coordinate is(%d,%d)\n", c.x, c.y);
    return 0;
}