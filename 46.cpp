//비트 논리연산
//시프트 연산 : 비트를 옮기다 <<,>>
//논리연산 && || !
//비트연산 &  |  ^  ~

#include <stdio.h>

int main()
{
	char a = 12, b = 10; //00001100, 00001010

	printf("%d\n", a & b); //00001000 AND 하나라도 0이면 0 
	printf("%d\n", a | b); //00001110 OR 둘중 하나만 1이여도 1
	printf("%d\n", a ^ b); //00000110 하나만 1일 때 1, 둘이 같으면 0
	printf("%d\n", ~a ); //11110011 다 반대로 나옴

	char c = 22;

	printf("%d\n", c << 1);
	printf("%d\n", c << 3);
	printf("%d\n", c << 6);
	printf("%d\n", c >> 1);
	printf("%d\n", c >> 3);
	printf("%d\n", c >> 6);
}
