
#define _CRT_SECURE_NO_WARNINGS
/*
��ȭ��ȣ ���� ���α׷�
2023-02-19
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LEN 30
#define TEL_LEN 30
#define PERSON_NUM 50

//��ȭ��ȣ ���� ��� ����ü
typedef struct contact {
	char name[NAME_LEN]; //�̸�
	char tel[TEL_LEN]; //��ȭ��ȣ
}Contact;

//�Լ� ����
void Insert(Contact* p, int *count);
void Delete(Contact* p, int *count);
void Search(Contact* p, int count);
void PrintAll(Contact* p, int count);

//main�Լ� ����
int main(void) {
	int count = 0; //��ȭ��ȣ�ο� ����� ��� ��
	Contact* p = (Contact*)malloc(sizeof(Contact) * PERSON_NUM); //�����Ҵ�
	int num = 0; //������ �޴� ��ȣ �����ϴ� ����
	do {
		//�޴�����ϰ� ������ �Է¹ޱ�
		printf("*****MENU*****\n1. Insert\n2. Delete\n3. Search\n4. Print All\n5. Exit\nChoose the item: ");
		scanf("%d", &num);
		switch (num) {
		case 1:
			Insert(p, &count);
			break;
		case 2:
			Delete(p, &count);
			break;
		case 3:
			Search(p, count);
			break;
		case 4:
			PrintAll(p, count);
			break;
		case 5:
			printf("[EXIT]\n");
			break; 
		default:
			printf("�ٽ� �Է��ϼ���.\n");
			break;
		}
		printf("\n");
	} while (num != 5);
	free(p); //�޸� ����
	return 0;
}
//�Լ� ����
//�̸��� ��ȭ��ȣ �Է¹޴� Insert �Լ�
void Insert(Contact* p, int* count) {
	printf("[INSERT]\n");
	char name[NAME_LEN], tel[TEL_LEN];
	printf("Input Name: "); scanf("%s", name);
	printf("Input Tell Number: "); scanf("%s", tel);
	strcpy(p[*count].name, name);
	strcpy(p[*count].tel, tel);
	printf("\tData Inserted\n");
	(* count)++;
}

//�̸� �Է��ϸ� �ش� ���� �������ִ� Delete �Լ�
void Delete(Contact* p, int * count){
	printf("[Delete]\n");
	char name[NAME_LEN];
	printf("Input Name: "); scanf("%s", name);
	for (int i = 0; i < *count; i++) {
		if (strcmp(name, p[i].name) == 0) { //�̸��� ���� ���
			(* count)--;
		}
	}
}

//�̸� �Է��ϸ� �ش� ���� ����ϴ� Search �Լ�
void Search(Contact* p, int count) {
	printf("[Search]\n");
	char name[NAME_LEN];
	printf("Input Name: "); scanf("%s", name);
	for (int i = 0; i < count; i++) {
		if(strcmp(name,p[i].name)==0) //�̸��� ���� ���
			printf("Name: %s\tTell: %s\n", p[i].name, p[i].tel);
	}
}

//��ȭ��ȣ���� ��� ������ ����ϴ� PrintAll �Լ�
void PrintAll(Contact *p, int count) {
	printf("[Print All Data]\n");
	for (int i = 0; i < count; i++) {
		printf("Name: %s\tTell: %s\n", p[i].name, p[i].tel);
	}
}