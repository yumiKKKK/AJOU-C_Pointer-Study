#define _CRT_SECURE_NO_WARNINGS
/*
����C 20��
����!���α׷���3 ����2
[������ �迭]
���α׷�: ����ڰ� �Է��� n*n������ ������ �迭�� ���� ����ϴ� ���α׷�
�Է�: ���� n
*/

#include <stdio.h>
#include <math.h>
#define size 20

//������ �迭�� ä���ִ� �Լ�
void snail(int n) {
	int arr[size][size]; //�迭 ����
	int num = n; //���� ����
	int x = 0, y = -1; //�迭 ��ġ
	int dir = 1; //ä��� ����
	int val = 0; //ä��� ��
	while (n > 0) {
		for (int i = 0; i < n; i++) { //���� ä���ֱ�
			y += dir;
			val += 1;
			arr[x][y] = val;
		}
		n--;
		for (int j = 0; j < n; j++) { //���� ä���ֱ�
			x += dir;
			val += 1;
			arr[x][y] = val;
		}
		dir *= (-1);
	}
	//�迭 ���
	printf("\n\n������ �迭:\n");
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			printf("%3d ",arr[i][j]);
		}
		printf("\n");
	}
}

//main�Լ� ����
int main(void) {
	//���� �Է¹ޱ�
	int n;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &n);

	//�Լ�ȣ��
	snail(n);

	return 0;
}