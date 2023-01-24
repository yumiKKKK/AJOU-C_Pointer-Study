#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char A[2][4] = { 1,2,3,4,5,6,7,8 }; //배열 A 선언 및 초기화
	char B[4][2];
	int i, j; 
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			B[i][j] = A[j][i]; //배열 A 역행렬하여 B 초기화
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d행 %d열 :%d\n", i + 1, j + 1, B[i][j]); //B행렬 출력
		}
		printf("\n");
	}
	return 0;
}