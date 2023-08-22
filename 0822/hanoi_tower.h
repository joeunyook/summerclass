#ifndef HANOI_TOWER
#define HANOI_TOWER

#include <stddef.h>

enum
{
	HANOI_TOWER_MAX = 42
};

typedef struct
{
	unsigned int items[HANOI_TOWER_MAX];
	size_t top;
} my_stack_t;

void stack_init(my_stack_t* p_stack);
int stack_push(my_stack_t* p_stack, unsigned int item);
int stack_pop(my_stack_t* p_stack, unsigned int* out_item);

typedef struct
{
	unsigned int max;
	my_stack_t stacks[3];
} hanoi_tower_t;

//하노이탑을 초기화하고 초기화 된 하노이탑을 출력합니다.
//가장 왼쪽 기둥의 아래에 가장 큰 원판부터 num개 쌓습니다.
//단, num <= 42에서만 정상적인 작동을 보장합니다.
void hanoi_tower_init(hanoi_tower_t* p_hanoi_tower, unsigned int num);

//전달된 하노이탑에서 src번 기둥의 원판 하나를 dst번 기둥으로 옮긴 후 하노이탑을 출력합니다.
//단, 비어있는 기둥에서 원판을 옮기려고 하면 "Src is empty"를 출력합니다.
//단, 큰 원판을 작은 원판 위로 옮기려고 하면 반영하지 않고 "Wrong movement"를 출력합니다.
void hanoi_tower_move(hanoi_tower_t* p_hanoi_tower, unsigned int src, unsigned int dst);

//하노이탑을 출력합니다.
void hanoi_tower_print(hanoi_tower_t* p_hanoi_tower);

//작성해야하는 함수의 원형입니다.
void hanoi_tower_move_n(hanoi_tower_t* ht, unsigned int src, unsigned int dst, unsigned int n);

#endif
