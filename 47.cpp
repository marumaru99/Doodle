#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	FILE* in , *out;//��Ʈ��
	int n;

	fopen_s(&in,"input.txt", "r");
	fopen_s(&out, "output.txt", "w");//�ִ� ������ ����� �߰�. a : �ִ� ���� �ڿ� �߰�

	fscanf_s(in, "%d", &n);
	fprintf(out, "%d\n", n);

	fclose(in);
	fclose(out);


}