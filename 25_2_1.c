#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	//���ڿ��� �ִ�������� �Է¹ޱ�
	int num;
	printf("�Է��� ���ڿ��� �ִ����: ");
	scanf("%d", &num);
	//���ڿ� �Է¹ޱ�
	char* str = (char*)malloc(sizeof(char)*(num+1)); //�����Ҵ�
	getchar(); //\n ����
	printf("���ڿ� �Է�: ");
	fgets(str, num+1, stdin);
	//���ڿ��� �ܾ ������ ���
	str[strlen(str) - 1] = 0; //\n ����
	for (int i = strlen(str); i > 0; i--) {
		if (str[i] == ' ') {
			printf("%s ", &str[i + 1]);
			str[i] = '\0';
		}
	}
	printf("%s ", &str[0]);
	free(str); //�޸� ����
	return 0;
}