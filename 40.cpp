///*
#include<stdio.h>

struct Info {
	int num;
	const char name[100];
	int cost;
};
int main()
{
	Info my = { 1, "»ß¾Æ ºí·¯¼Å", 4000 };

	printf("%d : %s %d¿ø", my.num, my.name, my.cost);

}
//*/