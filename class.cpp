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

	/* //���� ���ȭ ������ ����
	int x = 10;
	int y = 20;

	const int* p = &x;
	printf("%d\n", *p);

	p = &y;
	printf("%d\n", *p);

	y = 100;
	printf("%d\n", *p);

	//*px = 30; Ÿ�� ���ȭ �������� �������� �ּ��� ���� �ٲ� �� ����.
	*/

	/*
	//������ ���ȭ ������ ����
	int x = 10;
	int y = 20;

	int* const p = &x;
	//p = &y ���� �߻�
	printf("%d\n", *p);

	*p = 30;
	printf("%d\n", *p);
	*/

	/*NULL������ ����
	NULL���� ������ ��*/

	/*
	//1���� �迭 �� �����ͷ� ���
	int arr[3] = { 1,2,3 };
	for (int* p = arr; p < arr + 3; p++)
	{
		printf("%d ", *p);
	}

	printf("\n%d", *arr);
	*/

	
	//2���� �迭 �� �����ͷ� ���
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

