#ifndef STRUCT_EX_H
#define STRUCT_EX_H

#define X 0
#define Y 1

/*
struct st_coord
{
	int x;
	int y;
};

typedef struct st_coord coord_t;
*/

typedef struct
{
	int x;
	int y;
} coord_t;

typedef struct
{
	coord_t start_point;
	coord_t end_point;
} line_t;

typedef struct
{
	char name[16];
	unsigned int hp;
	unsigned int ap;
} pokemon_t;

typedef struct
{
	char* name;
	unsigned int hp;
	unsigned int ap;
} pokemon_t;

coord_t add(coord_t a, coord_t b);

void pokemon_rename(pokemon_t* pkm, const char* new_name);


#endif
