//∏≈≈©∑Œ
#include <stdio.h>

#define PRINT_HI printf("Hi");
#define SQUARE(X) ((X) * (X))
#define MAX(A,B) (((A)>(B))?(A):(B))
#define FOR(I,S,E) for(int I = S; I<=E; I++)
#define LOOP while (true)

/*
int max(int a, int b)
{
	//if (a > b) return a;
	//return b;

	return (a > b) ? a : b; 
}
*/
int main()
{
	//PRINT_HI;
	int a;
	scanf_s("%d", &a);
	printf("%d\n", SQUARE(a-1));

	int f = 2, g = 8;
	printf("%d\n", MAX(f,g));

	FOR(i, 1, 10)
	{
		printf("%d ", i);
	}

	LOOP
	{
		printf("*");
	}
}
