/*Q1 "잘가요!" 를 UTF8 로 인코딩하세요.
A1
잘 C798: 1110 1100 1001 1110 1001 1000
가 AC00: 1110 1010 1011 0000 1000 0000
요 C694: 1110 1100 1001 1010 1001 0100
! 0021: 1110 0000 1000 0000 1010 0001

Q2 int 배열 str을 선언하고 어떤 값으로 초기화 합니다.
str을 printf("%s", str); 과 같이 출력하세요.
"Hello World\n"가 출력되어야합니다.
assignment.c 파일에 작성해서 제출합니다.
*/

#include <stdio.h>

int main(void)
{
	int str[] = { 1819043144, 1870078063 , 6581362 };
	printf("%s\n", str);
	return 0;
}
