#define _CRT_SECURE_NO_WARNINGS
/*
���������� ���α׷�
2023-02-18
*/
#include <stdio.h>
#include <stdlib.h> //malloc
#include <string.h> //strlen
#define MAX 50
//���� ������ ��� ����ü ����
typedef struct book {
	char title[MAX]; //����
	char* author; //���ڸ�(������ ����)
	int pages;//��������
} Book;

int main(void) {
	Book b[3]; //����ü �迭 ����
	//3�� ���� �Է¹ޱ�
	printf("���� ���� �Է�\n");
	int i;
	for (i = 0; i < 3; i++) {
		b[i].author = (char*)malloc(sizeof(char) * MAX); //�����Ҵ�
		printf("����: "); scanf("%s", b[i].author); getchar(); //���ۺ���
		printf("����: "); fgets(b[i].title, sizeof(b[i].title), stdin);
		printf("��������: "); scanf("%d", &(b[i].pages)); 
	}
	//���� ���� ����ϱ�
	printf("\n���� ���� ���: \n");
	for (i = 0; i < 3; i++) {
		printf("book%d\n����: %s\n", i+1, b[i].author);
		(b[i].title)[strlen(b[i].title) - 1] = '\0'; //fgets�� ���� \n ����
		printf("����: %s\n", b[i].title);
		printf("��������: %d\n", b[i].pages);
	}
	return 0;
}