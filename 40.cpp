///*
#include<stdio.h>

struct Info {
	int num;
	const char name[100];
	int cost;
};
int main()
{
	Info my = { 1, "�߾� ����", 4000 };

	printf("%d : %s %d��", my.num, my.name, my.cost);

}
//*/