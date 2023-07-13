#include<stdio.h>

int main()
{
	/*
	int inum = 10;
	char ch = 'a';

	int j = 5;

	int* pinum = &inum;
	pinum = &j;

	//printf("%d\n", *pinum);

	//printf("%d %p", inum, ch);

	int i = 10;
	int* pi = &i;

	char c = 'a';
	char* pc = &c;

	float f = 0.2;
	float* pf = &f;

	printf("%d,%c,%f\n", *pi, *pc, *pf);
	printf("%d,%d,%d\n", pi, pc, pf);
	printf("%d,%d,%d\n", pi + 1, pc + 1, pf + 1);
	*/

	/* //변수 상수화 포인터 선언
	int x = 10;
	int y = 20;

	const int* p = &x;
	printf("%d\n", *p);

	p = &y;
	printf("%d\n", *p);

	y = 100;
	printf("%d\n", *p);

	//*px = 30; 타입 상수화 포인터의 역참조로 주소의 값을 바꿀 수 없다.
	*/

	/*
	//포인터 상수화 포인터 선언
	int x = 10;
	int y = 20;

	int* const p = &x;
	//p = &y 에러 발생
	printf("%d\n", *p);

	*p = 30;
	printf("%d\n", *p);
	*/

	/*NULL포인터 선언
	NULL값을 넣으면 됨*/

	/*
	//1차원 배열 값 포인터로 출력
	int arr[3] = { 1,2,3 };
	for (int* p = arr; p < arr + 3; p++)
	{
		printf("%d ", *p);
	}

	printf("\n%d", *arr);
	*/

	
	//2차원 배열 값 포인터로 출력
	/*
	int arr[2][3] = { {1,2,3},{4,5,6} };
	for (int(*row)[3] = arr; row < arr + 2; row++)
	{
		for (int* col = *row; col < *row + 3; col++)
		{
			printf("%d ", *col);
		}
		printf("\n");
	}
	*/
	int arr2[2][4] = { {1,2,3,4},{5,6,7,8} };
	for (int(*row)[4] = arr2; row < arr2 + 2; row++)
	{
		for (int* col = *row; col < *row + 4; col++)
		{
			printf("%d ", *col);
		}
		printf("\n");	
		printf("%d\n", sizeof(row));
		
	}

	// printf("%d\n", sizeof(arr2));
	printf("%d\n", *arr2);
	printf("%d\n", arr2);
	printf("%d %d %d\n", **arr2, arr2 + 0, arr2 + 1);

	int* ptr;
	printf("%d", sizeof(ptr));
}

