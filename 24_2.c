#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long filesize(FILE* fp) { //������ ũ�⸦ ����Ʈ�� ����Ͽ� ��ȯ�ϴ� �Լ�
	long fpos;
	long fsize;
	fpos = ftell(fp); //���� ��ġ �������� ��ġ���� ����(�Ǿ�)
	fseek(fp, 0, SEEK_END); //������ ������ �̵�
	fsize = ftell(fp); //���� ��ġ �������� ��ġ���� ����
	fseek(fp, fpos, SEEK_SET); //�ٽ� ������ �Ǿ����� �̵�
	return fsize;
	
}
int main(void) {
	FILE* fp = fopen("abc.txt", "w+t");
	//���Ͽ� ���� �Է�
	fputs("ABC \n", fp);
	//��� Ȯ��:
	char str[100];
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("������ ũ��: %ld\n", filesize(fp));

	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("������ ũ��: %ld\n", filesize(fp));
	fclose(fp);
	return 0;
}