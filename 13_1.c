#include <stdio.h>

int main() {
	//����1
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	for (int i = 0; i < 5; i++)  //ptr����� �� ����
		*(ptr++) += 2;
	printf("��� �迭�� ����� ���� 2�� ������Ų ���:");
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]); //�迭��� ����
	printf("\n");

	//����2
	int arr2[5] = { 1,2,3,4,5 };
	int* ptr2 = arr2;
	for (int i = 0; i < 5; i++) //ptr������� �������� 
		*(ptr2 + i) += 2;
	printf("��� �迭�� ����� ���� 2�� ������Ų ���:");
	for (int i = 0; i < 5; i++)
		printf("%d ", arr2[i]); //�迭��� ����
	printf("\n");

	//����3
	int arr3[5] = { 1,2,3,4,5 };
	int* ptr3 = &arr3[4]; //**�迭�� ������ ��Ҹ� ����Ű�� ������ ����
	int total = 0;
	for (int i = 0; i < 5; i++) 
		total += *(ptr3--);
	printf("�迭�� ���� ���� : %d\n", total);

	//����4
	int arr4[6] = { 1,2,3,4,5,6 };
	int* fptr = arr4, * bptr = &arr4[5]; //�迭�� �հ� �ڸ� ����Ű�� ������ ���� 2��
	int tmp=NULL;
	for (int i = 0; i < 3; i++) {
		tmp = *fptr;
		*fptr = *bptr;
		*bptr = tmp;
		fptr++;
		bptr--;
	}
	printf("�迭 ����: ");
	for (int i = 0; i < 6; i++)
		printf("%d ", arr4[i]);
	printf("\n");

	return 0;
}