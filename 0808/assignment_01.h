#ifndef ASSIGNMENT01_H 
#define ASSIGNMENT01_H

typedef struct
{
    int x;
    int y;
    int radius;
}circle_t;


void move(circle_t *c, int dx, int dy);

#endif