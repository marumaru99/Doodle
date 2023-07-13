//#include <stdio.h>
//
//int main() {
//	int arr[2][3] = { {1,2,3},{4,5,6} };
//
//	for (int(*a)[3] = arr; a < arr + 2; a++) {
//		for (int* b = *a; b < *a + 3; b++) {
//			printf("%d", *b);
//		}
//		printf("\n");
//	}
//
//}