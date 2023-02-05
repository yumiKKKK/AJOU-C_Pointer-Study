#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	//배열 선언
	char str1[20];
	char str2[20];
	char str3[40];
	//문자열 입력 받기
	puts("str1: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0; //\n 소멸
	puts("str2: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0; //\n 소멸

	//문자열 복사
	strcpy(str3, str1);
	//문자열 덧붙임
	strcat(str3, str2);
	//문자열 출력
	puts(str3);
}