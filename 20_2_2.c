#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	//�迭 ����
	char str1[20];
	char str2[20];
	char str3[40];
	//���ڿ� �Է� �ޱ�
	puts("str1: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0; //\n �Ҹ�
	puts("str2: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0; //\n �Ҹ�

	//���ڿ� ����
	strcpy(str3, str1);
	//���ڿ� ������
	strcat(str3, str2);
	//���ڿ� ���
	puts(str3);
}