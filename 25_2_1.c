#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	//문자열의 최대길이정보 입력받기
	int num;
	printf("입력할 문자열의 최대길이: ");
	scanf("%d", &num);
	//문자열 입력받기
	char* str = (char*)malloc(sizeof(char)*(num+1)); //동적할당
	getchar(); //\n 제거
	printf("문자열 입력: ");
	fgets(str, num+1, stdin);
	//문자열의 단어를 역으로 출력
	str[strlen(str) - 1] = 0; //\n 제거
	for (int i = strlen(str); i > 0; i--) {
		if (str[i] == ' ') {
			printf("%s ", &str[i + 1]);
			str[i] = '\0';
		}
	}
	printf("%s ", &str[0]);
	free(str); //메모리 해제
	return 0;
}