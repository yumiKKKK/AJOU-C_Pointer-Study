#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//문제11-2 배열 기반의 문자열 표현
int main() {
	//문제1
	printf("하나의 영단어를 입력하세요.:");
	char str[100] ;
	scanf("%s", str);
	int len=0;
	while (str[len] != '\0')
		len++;
	printf("영단어의 길이: %d\n", len);

	//문제2
	printf("\n하나의 영단어를 입력하세요.:");
	char str2[100];
	scanf("%s", str2);
	int len2 = 0;
	while (str[len2] != '\0')
		len2++;
	char tmp;
	for (int i = 0; i < len2 / 2; i++) {
		tmp = str2[i];
		str2[i] = str2[len2 - i-1];
		str2[len2 - i-1] = tmp;
	}
	printf("역순: %s\n", str2);

	//문제3
	printf("\n하나의 영단어를 입력하세요.:");
	char str3[100];
	scanf("%s", str3);
	int len3 = 0;
	while (str3[len3] != '\0')
		len3++;
	char a=str3[0];
	for (int i = 0; i < len3; i++) {
		if (a < str3[i])
			a = str3[i];
	}
	printf("가장 큰 아스키코드를 가진 문자: %c\n", a);
	return 0;
}