#define _CRT_SECURE_NO_WARNINGS
/*
���������� ���α׷�2
: ����ü �迭 ��� ����ü �����͹迭 �����ϰ� ����ü ������ �����Ҵ��ϴ� ���·� �籸��
2023-02-18
*/
#include <stdio.h>
#include <stdlib.h> //malloc
#include <string.h> //strlen
#define MAX 50
//���� ������ ��� ����ü ����
typedef struct book {
	char title[MAX]; //����
	char author[MAX]; //���ڸ�(������ ����)
	int pages;//��������
} Book;

int main(void) {
	Book* b[3]; //����ü ������ �迭 ����
	//3�� ���� �Է¹ޱ�
	printf("���� ���� �Է�\n");
	int i;
	for (i = 0; i < 3; i++) {
		b[i] = (Book*)malloc(sizeof(Book)); //�����Ҵ�
		printf("����: "); fgets(b[i]->author, sizeof(b[i]->author), stdin); 
		printf("����: "); fgets(b[i]->title, sizeof(b[i]->title), stdin);
		printf("��������: "); scanf("%d", &(b[i]->pages)); getchar(); //���ۺ���
	}
	//���� ���� ����ϱ�
	printf("\n���� ���� ���: \n");
	for (i = 0; i < 3; i++) {
		(b[i]->author)[strlen(b[i]->author) - 1] = '\0'; //fgets�� ���� \n ����
		printf("book%d\n����: %s\n", i + 1, b[i]->author);
		(b[i]->title)[strlen(b[i]->title) - 1] = '\0'; //fgets�� ���� \n ����
		printf("����: %s\n", b[i]->title);
		printf("��������: %d\n", b[i]->pages);
	}
	return 0;
}