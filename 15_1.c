#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
���α׷�: Ȧ���� ¦���� �������� ����ϴ� ���α׷�
�Է�: 10���� ����
*/
//�迭�� Ȧ���� ����ϴ� �Լ�
void PrintOdd(int* arr) {
	//Ȧ�� ���� ���
	int count = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			count++;
		}
	}
	//Ȧ�� ���
	printf("Ȧ�� ���:");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			printf(" %d", arr[i]);
			count--;
			if (count >= 1) { //������ Ȧ�� ���� ',' ���
				printf(",");
			}
		}
	}
	printf("\n");
}
//�迭�� ¦���� ����ϴ� �Լ�
void PrintEven(int* arr) {
	//¦�� ���� ���
	int count = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}
	//¦�� ���
	printf("¦�� ���:");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			printf(" %d", arr[i]);
			count--;
			if (count >= 1) { //������ ¦�� ���� ',' ���
				printf(",");
			}
		}
	}
	printf("\n");
}

//main�Լ� ����
int main(void) {
	int arr[10]; //���� 10�� �迭 ����
	//10���� ���� �Է� �ޱ�
	printf("�� 10���� ���� �Է�\n");
	for (int i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	}
	//�Լ� ȣ��
	PrintOdd(&arr);
	PrintEven(&arr);
	return 0;
}