#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//�� ����� �� ���� ���� �Է¹ޱ�
	int arr[5][5]={0,};
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("�л�%d�� ����%d ����: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < 4; i++) { 
		for (j = 0; j < 4; j++) {
			arr[i][4] += arr[i][j];//���κ� ���� ���
			arr[4][i] += arr[j][i];//���� ���� ���
		}
		arr[4][4] += arr[i][4];
	}
	//���
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d�� %d��: %2d ",i+1,j+1, arr[i][j]);
		}
		printf("\n");
	}
}