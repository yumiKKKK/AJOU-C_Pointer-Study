#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
���α׷�: �Է¹��� ���ڰ� Ȧ���� �迭�� �պ��� �����ϰ� ¦���� �ں��� �����ϴ� ���α׷�
�Է�: �� 10���� ����
*/
// main�Լ� ����
int main(void) {
	int num = 0, idx1 = 0, idx2=10;
	int arr[10], res[10]; 
	printf("�� 10���� ���� �Է�\n");
	for (int i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf("%d", &num); //10���� ���� �Է� �ޱ�
		if (num%2 != 0) { //Ȧ���϶�
			res[idx1]=num; //�պ��� ����
			idx1++;
		}
		else { //¦���϶�
			res[idx2-1]=num; //�ں��� ����
			idx2--;
		}
	}
	printf("�迭 ����� ��� : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", res[i]); //�迭 ���
	}
	return 0;
}