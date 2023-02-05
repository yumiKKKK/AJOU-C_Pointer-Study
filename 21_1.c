#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//문자입력받기
	int ch;
	printf("문자 입력: ");
	ch = getchar();
	//대->소 변환
	if ('a' <= ch && ch <= 'z') {
		ch -= 'a' - 'A';
		putchar(ch);
	}
	//소->대 변환
	else if ('A' <= ch && ch <= 'Z') {
		ch += 'a' - 'A';
		putchar(ch);
	}
	//알파벳 이외의 문자 오류 메세지 출력
	else
		printf("알파벳 이외의 문자를 입력하였습니다.\n");
}