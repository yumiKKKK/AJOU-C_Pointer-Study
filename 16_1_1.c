#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr1[3][9];
	for (int i = 0; i < 3; i++) { //2���� �迭�� ������ 2��, 3��, 4�� ����
		for (int j = 0; j < 9; j++) {
			arr1[i][j] = (2 + i) * (j + 1);
		}
	}
	for (int i = 0; i < 3; i++) { //2���� �迭 ���
		for (int j = 0; j < 9; j++) {
			printf("%d�� %d��: %d\n", i + 1, j + 1, arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}