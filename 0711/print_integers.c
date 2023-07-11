#include <stdio.h>

int main(void)
{
 unsigned short ush = 1;
 unsigned int  ui = 2;
 unsigned long ulong = 4;

 signed short ssh = -1;
 signed int si = 42;
 signed long slong = -8;

 printf("ushort:%u\nuint:%u\nulong:%U\nsshort:%d\nsint:%d\nslong:%D\n", ush, ui, ulong, ssh, si, slong);

 return 0;

}