/*
����C 20��
����!���α׷���3 ����4
[���� ����2]
���α׷�: �� �ֻ����� ������ �� ����� ����ϴ� ���α׷�
->���� �ø��� �ٸ� ���� �ϳ��� ��� ���α׷��� ����
*/
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((int)time(NULL)); //����ð����� ���� ����
	for (int i = 0; i < 2; i++)
		printf("�ֻ��� %d�� ��� %d\n", i+1, rand() % 5 + 1);// %�����ڷ� ���� ����
	return 0;
}