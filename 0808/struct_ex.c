#include <stdio.h>
#include <string.h>

#include "struct_ex.h"

coord_t add(coord_t a, coord_t b)
{
	coord_t ret;
	ret.x = a.x + b.x;
	ret.y = a.y + b.y;
	return ret;
}

void pokemon_rename(pokemon_t* pkm, const char* new_name)
{
	strcpy(pkm->name, new_name);
	printf("name: %s\n", pkm->name);
	printf("hp: %d\n", pkm->hp);
	printf("ap: %d\n", pkm->ap);
	return;
}

int main(void)
{
	int coord[2];
	coord[X] = 42;
	coord[Y] = 35;
	printf("(%d, %d)\n", coord[X], coord[Y]);

	coord_t crd = { -1, 3 };
	printf("(%d, %d)\n", crd.x, crd.y);

	line_t ln = { {0,0}, {5,4} };
	printf("(%d, %d), (%d, %d)\n",
			ln.start_point.x, 
			ln.start_point.y, 
			ln.end_point.x, 
			ln.end_point.y
			);

	coord_t sum = add(ln.start_point, ln.end_point);
	printf("(%d, %d)\n", sum.x, sum.y);

	coord_t triangle[3] =
	{
		{0,0},
		{0,3},
		{4,0}
	};

	pokemon_t pikachu;
	strcpy(pikachu.name, "Pika");
	pikachu.hp = 10;
	pikachu.ap = 5;
	printf("name: %s\n", pikachu.name);
	printf("hp: %d\n", pikachu.hp);
	printf("ap: %d\n", pikachu.ap);
	pokemon_rename(&pikachu, "PIKA");
	printf("name: %s\n", pikachu.name);
	printf("hp: %d\n", pikachu.hp);
	printf("ap: %d\n", pikachu.ap);
	return 0;
}
