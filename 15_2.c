#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
���α׷�: 10������ 2������ ��ȯ�Ͽ� ����ϴ� ���α׷�
�Է�: 10���� ���� �ϳ�
*/
int main(void) {
	//10���� �Է¹ޱ�
	int num;
	printf("10���� ���� �Է�: ");
	scanf("%d", &num);
	int arr[50]={0, }, idx=0;
	while (num > 0) { //���� 0�� �� ������ 2�� ������
		arr[idx] = num % 2; //�������� arr�迭�� ����
		num /= 2; 
		idx++;
	}
	while (idx > 0) {
		printf("%d", arr[idx-1]); //arr�迭 �������� ����� ���� 2����
		idx--;
	}
}