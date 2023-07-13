#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	FILE* in , *out;//스트림
	int n;

	fopen_s(&in,"input.txt", "r");
	fopen_s(&out, "output.txt", "w");//있던 내용을 지우고 추가. a : 있던 내용 뒤에 추가

	fscanf_s(in, "%d", &n);
	fprintf(out, "%d\n", n);

	fclose(in);
	fclose(out);


}