#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���� C ����11-1 [1���� �迭�� Ȱ��]
int main() {
	////����1
	printf("Q11-1-1\n");
	int arr[5]; //�迭 ����
	printf("�� 5���� ������ �Է��ϼ���.:");
	for (int i = 0; i < 5; i++) //����� �迭 �Է�
		scanf("%d", &arr[i]);
	//�ִ�
	int max = arr[0];
	for (int i = 1; i < 5; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	printf("�ּڰ�: %d\n", max);
	//�ּڰ�
	int min = arr[0];
	for (int i = 1; i < 5; i++) {
		if (min > arr[i]) 
			min = arr[i];
	}
	printf("�ִ�: %d\n", min);
	//�� ��
	int total = 0;
	for (int i = 0; i < 5; i++)
		total += arr[i];
	printf("�� ��: %d\n", total);

	////���� 2
	printf("\nQ11-1-2\n");
	char arr2[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
	int ar2Len = sizeof(arr2) / sizeof(char);
	for (int i = 0; i < ar2Len; i++) {
		printf("%c", arr2[i]);
	}
	printf("\n");
	return 0;
}