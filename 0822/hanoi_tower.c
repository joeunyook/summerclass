#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hanoi_tower.h"

void stack_init(my_stack_t* p_stack)
{
	p_stack->top = 0;
	return;
}

int stack_push(my_stack_t* p_stack, unsigned int item)
{
	if (p_stack->top == HANOI_TOWER_MAX)
	{
		return 0;
	}
	p_stack->items[p_stack->top++] = item;
	return 1;
}

int stack_pop(my_stack_t* p_stack, unsigned int* out_item)
{
	if (p_stack->top == 0)
	{
		return 0;
	}
	*out_item = p_stack->items[--p_stack->top];
	return 1;
}

void hanoi_tower_init(hanoi_tower_t* p_hanoi_tower, unsigned int num)
{
	p_hanoi_tower->max = num;
	for (size_t i = 0; i < 3; ++i)
	{
		stack_init(&p_hanoi_tower->stacks[i]);
	}
	for (size_t i = num; i != 0; --i)
	{
		stack_push(&p_hanoi_tower->stacks[0], i);
	}
	hanoi_tower_print(p_hanoi_tower);
	return;
}

void hanoi_tower_print(hanoi_tower_t* p_hanoi_tower)
{
	char canvas[HANOI_TOWER_MAX][HANOI_TOWER_MAX * 3 + 3];
	memset(canvas, ' ', sizeof(canvas));

	for (size_t i = 0; i < 3; ++i)
	{
		size_t origin = i * p_hanoi_tower->max + i;
		for (size_t j = 0; j < p_hanoi_tower->max; ++j)
		{
			canvas[j][origin] = '|';
		}
		for (size_t j = 0; j < p_hanoi_tower->stacks[i].top; ++j)
		{
			unsigned int disk = p_hanoi_tower->stacks[i].items[j];
			for (size_t k = 0; k < disk; ++k)
			{
				canvas[p_hanoi_tower->max - j - 1][origin + k] = '-';
			}
		}
	}

	for (size_t i = 0; i < p_hanoi_tower->max; ++i)
	{
		for (size_t j = 0; j < p_hanoi_tower->max * 3 + 3; ++j)
		{
			putchar(canvas[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	return;
}

void hanoi_tower_move(hanoi_tower_t* p_hanoi_tower, unsigned int src, unsigned int dst)
{
	unsigned int disk;
	if (stack_pop(&p_hanoi_tower->stacks[src], &disk) == 0)
	{
		printf("Src is empty\n\n");
		return;
	}
	my_stack_t* p_dst_stack = &p_hanoi_tower->stacks[dst];
	unsigned int dst_top = p_dst_stack->top;
	unsigned int dst_top_disk = p_dst_stack->items[p_dst_stack->top - 1];
	if (dst_top != 0 && dst_top_disk < disk)
	{
		printf("Wrong movement\n\n");
		return;
	}
	stack_push(&p_hanoi_tower->stacks[dst], disk);
	hanoi_tower_print(p_hanoi_tower);
	return;
}
