#ifndef ASSIGNMENT00_H 
#define ASSIGNMENT00_H

typedef struct
{
    int x;
    int y;
    int radius;
}circle_t;

int is_overlapped(circle_t c1, circle_t c2);

#endif