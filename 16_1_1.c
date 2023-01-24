#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr1[3][9];
	for (int i = 0; i < 3; i++) { //2차원 배열에 구구단 2단, 3단, 4단 저장
		for (int j = 0; j < 9; j++) {
			arr1[i][j] = (2 + i) * (j + 1);
		}
	}
	for (int i = 0; i < 3; i++) { //2차원 배열 출력
		for (int j = 0; j < 9; j++) {
			printf("%d행 %d열: %d\n", i + 1, j + 1, arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}