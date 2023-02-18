#define _CRT_SECURE_NO_WARNINGS
/*
도서관리용 프로그램
2023-02-18
*/
#include <stdio.h>
#include <string.h> //strlen
#define MAX 50
//도서 정보를 담는 구조체 선언
typedef struct book {
	char title[MAX]; //제목
	char author[MAX]; //저자명(공백을 포함)
	int pages;//페이지수
} Book;

int main(void) {
	Book b[3]; //구조체 배열 선언
	//3권 정보 입력받기
	printf("도서 정보 입력\n");
	int i;
	for (i = 0; i < 3; i++) {
		printf("저자: "); fgets(b[i].author, sizeof(b[i].author), stdin); 
		printf("제목: "); fgets(b[i].title, sizeof(b[i].title), stdin);
		printf("페이지수: "); scanf("%d", &(b[i].pages)); 
		getchar(); //버퍼비우기
	}
	//도서 정보 출력하기
	printf("\n도서 정보 출력 \n");
	for (i = 0; i < 3; i++) {
		(b[i].author)[strlen(b[i].author) - 1] = '\0'; //fgets로 인한 \n 제거
		printf("book%d\n저자: %s\n", i+1, b[i].author);
		(b[i].title)[strlen(b[i].title) - 1] = '\0'; //fgets로 인한 \n 제거
		printf("제목: %s\n", b[i].title);
		printf("페이지수: %d\n", b[i].pages);
	}
	return 0;
}
