#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void indata(int(*parr)[3], int row);
void outdata(int parr[][3], int row);

int main()
{
	int arr2d[2][3] = { 0 };
	
	indata(arr2d, 2);
	outdata(arr2d, 2);

	return 0;

}

void indata(int(*parr)[3], int row)
{
	int i = 0 , j = 0;
	printf("%d x 3 �迭 �Է�\n", row);
	for (i = 0; i < row; i++) 
	{
		printf("%d��:", i+1);
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &parr[i][j]);
		}
	}
}

void outdata(int parr[][3], int row)
{
	int i = 0, j = 0;
	printf("%d x 3 �迭 ���\n", row);
	for (i = 0; i < row; i++) 
	{
		printf("%d��: ", i + 1);
		for (j = 0; j < 3; j++) 
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
}
