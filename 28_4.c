#define _CRT_SECURE_NO_WARNINGS
/*
���ڿ��� �����ϰ� �ִ� ������ ��� 
A�� P�� �����ϴ� �ܾ��� ���� ����ϴ� ���α׷�
2023-02-19
*/
#include <stdio.h>
int main(void) {
	FILE* file = fopen("text.txt", "rt"); //���� ����
	//���� ���� Ȯ��
	if (file == NULL) {
		printf("file open error!\n");
		return -1;
	}
	//�ܾ��� �� ���
	int an = 0,  pn = 0; //�� A, P�� �����ϴ� �ܾ��� �� ������ ����
	char str[50]; //������ �ܾ �ӽ� ������ ����
	while (feof(file) == 0) { //������ �� ������ ������ �ݺ�
		fscanf(file, "%s", str);
		if (*str == 'A')
			an++;
		else if (*str == 'P')
			pn++;
		else
			continue;
	}
	//�ܾ��� �� ���
	printf("C:\\>28_4.c text.txt\n");
	printf("A�� �����ϴ� �ܾ��� ��: %d\n", an);
	printf("P�� �����ϴ� �ܾ��� ��: %d\n", pn);
	//���� �ݱ�
	fclose(file);
	return 0;
}