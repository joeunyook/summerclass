#include "hanoi_tower.h"

void hanoi_tower_move_2(hanoi_tower_t* ht, unsigned int src, unsigned int dst)
{
	unsigned int remain = 0;
	if (remain == src)
	{
		remain = 1;
	}
	if (remain == dst)
	{
		remain = 2;
	}

	hanoi_tower_move(ht, src, remain);
	hanoi_tower_move(ht, src, dst);
	hanoi_tower_move(ht, remain, dst);
	return;
}

void hanoi_tower_move_n(hanoi_tower_t* ht, unsigned int src, unsigned int dst, unsigned int n)
{
	if (n == 1)
	{
		//move 한번 직접 호출
	}
	//remain 찾기
	//n - 1 개 remain으로 옮기기
	//1개 dst로 옮기기
	//다시... remain에 있던거 dst로 옮기기
}

int main(void)
{
	hanoi_tower_t tower;
	hanoi_tower_init(&tower, 6);
	hanoi_tower_move_2(&tower, 0, 2);

	/*
	hanoi_tower_move(&tower, 0, 2);
	hanoi_tower_move(&tower, 0, 1);
	hanoi_tower_move(&tower, 2, 1);
	hanoi_tower_move(&tower, 0, 1);
	*/

	return 0;
}
