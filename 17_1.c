#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void MaxAndMin(int**, int**, int*, int); //�Լ� ����
int main(void) {
	//�� �����ͺ����� �迭 ���� 
	int* maxPtr;
	int* minPtr;
	int arr[5];

	//�迭 ��� �Է� �ޱ�
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d��° ���� �Է�: ", i+1);
		scanf("%d", &arr[i]);
	}

	//�� �����ͺ����� �迭�� ����
	MaxAndMin(&maxPtr, &minPtr, arr, sizeof(arr) / sizeof(int)); 

	//���
	printf("�Էµ� ����: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n���� ū ��: %d\n���� ���� ��: %d\n", *maxPtr, *minPtr);
	return 0;
}
//�Լ� ����
void MaxAndMin(int** maxD, int** minD, int* arr, int len) {
	//������ ���� ���� �� �ʱ�ȭ
	int* max, * min;
	max = min = &arr[0];
	//max, min�� ���� ū ���� ���� ���� �� ����
	int i;
	for (i = 0; i < len; i++) {
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}
	//���� ������ ������ max�� min���� �ʱ�ȭ
	*maxD = max;
	*minD = min;
}