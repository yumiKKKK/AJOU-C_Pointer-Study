#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//공백 index 반환하는 함수
int space(char* str, int len) {
	int i;
	for (i = 0; i < len; i++) {
		if (str[i] == ' ')
			return i;
	}
	return -1; //모든 제어경로: 공백이 없는 경우
}

int main(void) {
	//두 사람의 이름 나이 입력 받기
	puts("이름 나이 입력:");
	char str1[50], str2[50];
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	//함수 호출하여 공백 위치 확인
	int s1 = sizeof(str1), s2 = sizeof(str2);
	int idx1 = space(str1, s1);
	int idx2 = space(str2, s2);

	//이름 문자열 비교
	if (idx1 != idx2) //길이 다르면 이름도 다르므로
		puts("이름이 다릅니다.");
	else if (!strncmp(str1, str2, idx1))  //같은지 비교
		puts("이름이 같습니다.");
	else
		puts("이름이 다릅니다.");
	//나이 문자열 비교
	if (atoi(&str1[idx1+1])== atoi(&str2[idx2+1]))
		puts("나이가 같습니다.");
	else
		puts("나이가 다릅니다.");

}