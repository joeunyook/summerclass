#include "assignment.h"
#include <stdio.h>

int main(void)
{
    char random_character = 'A';
    if (is_alphabet(random_character))
    {
        printf("%c is an alphabet", random_character);
    }
    else
    {
        printf("%c is not an alphabet", random_character);
    }
    return 0;
}