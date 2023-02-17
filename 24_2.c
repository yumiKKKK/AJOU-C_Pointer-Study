#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long filesize(FILE* fp) { //파일의 크기를 바이트로 계산하여 반환하는 함수
	long fpos;
	long fsize;
	fpos = ftell(fp); //파일 위치 지시자의 위치정보 저장(맨앞)
	fseek(fp, 0, SEEK_END); //파일의 끝으로 이동
	fsize = ftell(fp); //파일 위치 지시자의 위치정보 저장
	fseek(fp, fpos, SEEK_SET); //다시 파일의 맨앞으로 이동
	return fsize;
	
}
int main(void) {
	FILE* fp = fopen("abc.txt", "w+t");
	//파일에 글자 입력
	fputs("ABC \n", fp);
	//출력 확인:
	char str[100];
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의 크기: %ld\n", filesize(fp));

	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의 크기: %ld\n", filesize(fp));
	fclose(fp);
	return 0;
}