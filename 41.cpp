//#include<stdio.h>
//
//struct Info 
//{
//	int num;
//	char name[100];
//	int cost;
//};
//
//void Sale(Info *p, int percent)
//{
//	p->cost -= p->cost * percent / 100;
//};
//
//void Swap(Info *a, Info *b)
//{
//	Info t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int main()
//{
//	Info my = { 1, "삐아 블러셔", 4000 };
//	Info a = { 2, "라카 베베", 8000 };
//
//	//Info *ptr = &my;
//
//	//Sale(&my, 10);
//
//	Swap(&my, &a);
//
//	printf("%d. %s %d원\n", my.num, my.name, my.cost);
//	printf("%d. %s %d원\n", a.num, a.name, a.cost);
//
//
//
//	//printf("%d. %s %d원", (*ptr).num, ptr->name, ptr->cost);
//
//}