#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�� ������ ����� ���� ���� �ڹٲٴ� �Լ�
void Swap(int* num1, int* num2, int* num3) {
	int tmp = *num1;
	*num1 = *num3;
	*num3 = *num2;
	*num2 = tmp;
}

//main�Լ� ����
int main(void) {
	int num1, num2, num3;
	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &num1, &num2, &num3); //�� ���� �Է� �ޱ�
	Swap(&num1, &num2, &num3); //swap�Լ� ȣ��
	printf("�ڹٲ� ���: %d %d %d\n", num1, num2, num3); //��� ���
	return 0;
}