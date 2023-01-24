#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���� num�� ����� ���� ������ ����ϴ� �Լ���
//call-by-value���:
int SquareByValue(int num) { //���� ���ڷ� �ޱ�
	return num * num; //���� ���� ��ȯ
}
//call-by-reference���:
int SquareByReference(int *num) { //������ �ּҰ��� ���ڷ� �ޱ�
	*num *= (*num); //������ ����� ���� ������ �ٽ� ������ ����
	return *num;
}
//main�Լ� ����
int main(void) {
	int num;
	printf("���� �Է�:");
	scanf("%d", &num); //���� �Է¹ޱ�

	printf("call-by-value��� ���� ���: %d\n", SquareByValue(num));
	printf("num�� ����� ��: %d\n\n", num);
	printf("call-by-reference��� ���� ���: %d\n", SquareByReference(&num));
	printf("num�� ����� ��: %d\n", num);
	return 0;
}