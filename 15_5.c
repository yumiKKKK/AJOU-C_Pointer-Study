#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
���α׷� : �迭 ���� ��ҵ��� ������������ �����ϴ� ���α׷�
**���� ����**
�Է�: 7���� ����
*/
//�迭�� ���ڷ� �޾� ������������ �����ϴ� �Լ�
void DesSort(int *arr, int len) {
	for (int i = 0; i < len - 1; i++) { //���ĵ��� ���� ���ڸ� ���ϴ� for��
		for (int j = 0; j < len - 1 - i; j++) { //�Ǿպ��� ���Ͽ� ���� ���� ���� �ڷ� ������ for��
			if (arr[j] < arr[j + 1]) { //�� ����� ���� �ڿ� ����� ������ ũ��
				//����� ��ġ �ٲٱ�
				int tmp = arr[j]; 
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main(void) {
	//7���� ���� �Է¹ޱ�
	int arr[7];
	for (int i = 0; i < 7; i++) {
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	}
	//�Լ� ȣ��
	DesSort(arr, sizeof(arr)/sizeof(int));
	//���ĵ� �迭��� ���
	for (int i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	return 0;
}