#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H
#include <stdio.h>

int is_alphabet(char c);
int is_digit(char c);
size_t get_len(const char str[]);
int is_whitespace(char c);
int is_equal(const char str1[], const char str2[]);
void copy(char dst[], const char src[]);

#endif 