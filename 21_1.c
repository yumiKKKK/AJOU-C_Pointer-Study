#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//�����Է¹ޱ�
	int ch;
	printf("���� �Է�: ");
	ch = getchar();
	//��->�� ��ȯ
	if ('a' <= ch && ch <= 'z') {
		ch -= 'a' - 'A';
		putchar(ch);
	}
	//��->�� ��ȯ
	else if ('A' <= ch && ch <= 'Z') {
		ch += 'a' - 'A';
		putchar(ch);
	}
	//���ĺ� �̿��� ���� ���� �޼��� ���
	else
		printf("���ĺ� �̿��� ���ڸ� �Է��Ͽ����ϴ�.\n");
}