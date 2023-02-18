#define _CRT_SECURE_NO_WARNINGS
/*
문자열을 저장하고 있는 파일을 열어서 
A와 P로 시작하는 단어의 수를 출력하는 프로그램
2023-02-19
*/
#include <stdio.h>
int main(void) {
	FILE* file = fopen("text.txt", "rt"); //파일 오픈
	//파일 오픈 확인
	if (file == NULL) {
		printf("file open error!\n");
		return -1;
	}
	//단어의 수 계산
	int an = 0,  pn = 0; //각 A, P로 시작하는 단어의 수 저장할 변수
	char str[50]; //파일의 단어를 임시 저장할 변수
	while (feof(file) == 0) { //파일의 끝 도달할 떄까지 반복
		fscanf(file, "%s", str);
		if (*str == 'A')
			an++;
		else if (*str == 'P')
			pn++;
		else
			continue;
	}
	//단어의 수 출력
	printf("C:\\>28_4.c text.txt\n");
	printf("A로 시작하는 단어의 수: %d\n", an);
	printf("P로 시작하는 단어의 수: %d\n", pn);
	//파일 닫기
	fclose(file);
	return 0;
}