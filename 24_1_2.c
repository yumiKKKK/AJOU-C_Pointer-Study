#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	FILE* fp = fopen("mystory.txt", "at");
	fputs("#��ܸԴ� ����: «��, ������\n", fp);
	fputs("#���: �౸ \n", fp);
	fclose(fp);
	return 0;
}