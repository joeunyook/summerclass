/*unsigned char형 변수 num을 선언하세요.
num의 값을 8자리 2진법 표기로 출력합니다.
산술 연산자의 사용을 금지합니다.
num의 값은 채점 중 임의로 변경됩니다.
(ex: num == 42일 때 출력은 "00101010\n")

#include <stdio.h>

int main(void)
{
	int str[] = { 1819043144, 1870078063 , 6581362 };
	printf("%s\n", str);
	return 0;
}
*/

#include <stdio.h>
 
int main (void)

{
    unsigned char num = 121;
    unsigned char bit1 = (num >> 7) & 1;
    unsigned char bit2 = (num >> 6) & 1;
    unsigned char bit3 = (num >> 5) & 1;
    unsigned char bit4 = (num >> 4) & 1;
    unsigned char bit5 = (num >> 3) & 1;
    unsigned char bit6 = (num >> 2) & 1;
    unsigned char bit7 = (num >> 1) & 1;
    unsigned char bit8 = (num) & 1;
    printf("%d%d%d%d%d%d%d%d\n", bit1, bit2, bit3, bit4, bit5, bit6, bit7, bit8);
    return 0;
}





