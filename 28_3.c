#define _CRT_SECURE_NO_WARNINGS
/*
�� ���Ҽ��� ������� ������ �����ϴ� ���α׷�
2023-02-18
*/
#include <stdio.h>
#include "28_3.h"
int main(void) {
	//2���� ���Ҽ� �Է¹ޱ�
	Complex com[2]; //����ü �迭 ����
	for (int i = 0; i < 2; i++) {
		printf("���Ҽ� �Է�%d[�Ǽ� ���]: ", i + 1);
		scanf("%lf %lf", &com[i].real, &com[i].imagin);
	}
	//��� ����ϱ�
	printf("���� ���] �Ǽ�: %lf, ���: %lf\n", ADD(com[0], com[1]).real, ADD(com[0], com[1]).imagin);
	printf("���� ���] �Ǽ�: %lf, ���: %lf\n", MUL(com[0], com[1]).real, MUL(com[0], com[1]).imagin);
	return 0;
}