/*Q01
assignment01.c에
unsigned int형 전역변수 g_cnt를 선언하고 10으로 초기화하세요.
g_cnt를 1 감소시키는 함수 void cnt_down(void)를 정의하세요.
g_cnt에 10을 대입하는 void cnt_reset(void)를 정의하세요.
g_cnt의 값을 출력하는 void cnt_print(void)를 정의하세요.
다른 파일에서 assignment01.c의 함수들을 사용할 수 있도록 assignment01.h를 작성하세요.
단, g_cnt의 값을 임의로 변경하려고 하는 경우 컴파일이 불가능하도록 작성하세요.*/

#include "assignment01.h"
#include <stdio.h>

static unsigned int g_cnt = 10;
void cnt_down(void)
{
    g_cnt--;
    
}
void cnt_reset(void)
{
     g_cnt = 10;
}
void cnt_print(void)
{
     printf("%u", g_cnt);
}


