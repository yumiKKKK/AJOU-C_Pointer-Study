#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char A[2][4] = { 1,2,3,4,5,6,7,8 }; //�迭 A ���� �� �ʱ�ȭ
	char B[4][2];
	int i, j; 
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			B[i][j] = A[j][i]; //�迭 A ������Ͽ� B �ʱ�ȭ
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d�� %d�� :%d\n", i + 1, j + 1, B[i][j]); //B��� ���
		}
		printf("\n");
	}
	return 0;
}