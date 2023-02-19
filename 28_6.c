
#define _CRT_SECURE_NO_WARNINGS
/*
전화번호 관리 프로그램
2023-02-19
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAME_LEN 30
#define TEL_LEN 30
#define PERSON_NUM 50

//전화번호 정보 담는 구조체
typedef struct contact {
	char name[NAME_LEN]; //이름
	char tel[TEL_LEN]; //전화번호
}Contact;

//함수 선언
void Insert(Contact* p, int *count);
void Delete(Contact* p, int *count);
void Search(Contact* p, int count);
void PrintAll(Contact* p, int count);

//main함수 시작
int main(void) {
	int count = 0; //전화번호부에 저장된 사람 수
	Contact* p = (Contact*)malloc(sizeof(Contact) * PERSON_NUM); //동적할당
	int num = 0; //선택한 메뉴 번호 저장하는 변수
	do {
		//메뉴출력하고 선택지 입력받기
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
			printf("다시 입력하세요.\n");
			break;
		}
		printf("\n");
	} while (num != 5);
	free(p); //메모리 해제
	return 0;
}
//함수 정의
//이름과 전화번호 입력받는 Insert 함수
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

//이름 입력하면 해당 정보 삭제해주는 Delete 함수
void Delete(Contact* p, int * count){
	printf("[Delete]\n");
	char name[NAME_LEN];
	printf("Input Name: "); scanf("%s", name);
	for (int i = 0; i < *count; i++) {
		if (strcmp(name, p[i].name) == 0) { //이름이 같을 경우
			(* count)--;
		}
	}
}

//이름 입력하면 해당 정보 출력하는 Search 함수
void Search(Contact* p, int count) {
	printf("[Search]\n");
	char name[NAME_LEN];
	printf("Input Name: "); scanf("%s", name);
	for (int i = 0; i < count; i++) {
		if(strcmp(name,p[i].name)==0) //이름이 같을 경우
			printf("Name: %s\tTell: %s\n", p[i].name, p[i].tel);
	}
}

//전화번호부의 모든 정보를 출력하는 PrintAll 함수
void PrintAll(Contact *p, int count) {
	printf("[Print All Data]\n");
	for (int i = 0; i < count; i++) {
		printf("Name: %s\tTell: %s\n", p[i].name, p[i].tel);
	}
}