/*
����C 20��
����!���α׷���3 ����3
[���� ����]
���α׷�: 0~99������ ������ 5�� �����ϴ� ���α׷�
-> 0~RAND_MAX������ ���� 5�� �����ϴ� ���α׷��� ����
*/
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i; 
	printf("������ ����: 0���� 99����\n");
	for (int i = 0; i < 5; i++) {
		printf("���� ���: %d\n", rand()%99);//%�����ڷ� ���� ����
	}
	return 0;
}