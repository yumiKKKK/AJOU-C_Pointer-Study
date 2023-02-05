#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	//적당한 길이의 문자열 입력 받기
	char str[50];
	puts("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	//숫자 총 합 계산
	int i = 0, res = 0;
	for(int i=0; i<strlen(str); i++){
		if ('1' <= str[i] && str[i] <= '9')
			res += str[i] + (1-'1');
	}
	printf("문자열 안에 존재하는 숫자의 총합: %d\n", res);
}