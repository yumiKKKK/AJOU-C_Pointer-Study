#define _CRT_SECURE_NO_WARNINGS
/*
두 텍스트 파일이 같은지 확인하는 프로그램
2023-02-19
*/
#include <stdio.h>
//두 텍스트파일이 같으면 1, 다르면 0을 반환하는 함수
int IsFileSame(FILE* f1, FILE* f2) {
	//1.텍스트 개수 비교
	long fpos1, fpos2;
	long fsize1, fsize2;
	fpos1 = ftell(f1);
	fseek(f1, 0, SEEK_END);
	fsize1 = ftell(f1);
	fseek(f1, fpos1, SEEK_SET);
	fpos2 = ftell(f2);
	fseek(f2, 0, SEEK_END);
	fsize2 = ftell(f2);
	fseek(f2, fpos2, SEEK_SET);
	if (fsize1 != fsize2) 
		return 0;
	//2.텍스트 한글자씩 비교
	while (1) {
		char str = fgetc(f1);
		if (str == EOF) //파일끝 도달하는 경우
			return 1;
		else if (str != fgetc(f2)) 
			return 0;
		else continue;
	}
}
int main(void) {
	//파일 열기
	FILE* f1 = fopen("d1.txt", "rt");
	FILE* f2 = fopen("d2.txt", "rt");
	if (f1 == NULL || f2 == NULL) {
		puts("파일 오픈 실패!\n");
		return -1;
	}
	//결과 출력
	printf("C:\\test>28_5 d1.txt d2.txt\n");
	if (IsFileSame(f1, f2) == 1) printf("두 텍스트 파일은 같습니다.\n");
	else printf("두 텍스트 파일은 다릅니다.\n");
	//파일 닫기
	fclose(f1);
	fclose(f2);
	return 0;
}