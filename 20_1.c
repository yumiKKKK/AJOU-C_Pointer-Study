/*
����C 20�� 
����!���α׷���3 ����1
[�迭�� ȸ��]
���α׷�: 1~16�� ����� 4*4 �迭�� ��ҵ��� �ð�������� 90�� ȸ������ ����� ����ϴ� ���α׷�
*/
#include <stdio.h>
//4*4 �迭�� 90�� ȸ����Ű�� �Լ� ���� 
void rotate(int (*arr)[4]) {
	//90�� ȸ��
	int arr2[4][4]={0,};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			arr2[i][j] = arr[i][j];
	}
	int k = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			arr[i][j] = arr2[3 - j][k];
		k++;
	}
}
//2���� �迭 ����ϴ� �Լ�
void print(int(*arr)[4], int col) {
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < 4; j++)
			printf("%2d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}
int main(void) {
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 }; //�迭 ���� �� �ʱ�ȭ
	print(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < 3; i++) {
		printf("%d��° ȸ��: \n", i + 1);
		rotate(arr); //�Լ� ȣ��
		print(arr, sizeof(arr) / sizeof(arr[0]));
	}
	return 0;
}