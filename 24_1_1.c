#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	FILE* fp = fopen("mystory.txt", "wt");
	if (fp == NULL) {
		puts("���� ���� ����");
		return -1;
	}
	fputs("#�̸�: ������ \n", fp);
	fputs("#�ֹι�ȣ: 900208-1012589 \n", fp);
	fputs("#��ȭ��ȣ: 010-1111-2222 \n", fp);
	fclose(fp);
	return 0;
}