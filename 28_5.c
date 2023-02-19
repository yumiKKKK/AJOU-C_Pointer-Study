#define _CRT_SECURE_NO_WARNINGS
/*
�� �ؽ�Ʈ ������ ������ Ȯ���ϴ� ���α׷�
2023-02-19
*/
#include <stdio.h>
//�� �ؽ�Ʈ������ ������ 1, �ٸ��� 0�� ��ȯ�ϴ� �Լ�
int IsFileSame(FILE* f1, FILE* f2) {
	//1.�ؽ�Ʈ ���� ��
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
	//2.�ؽ�Ʈ �ѱ��ھ� ��
	while (1) {
		char str = fgetc(f1);
		if (str == EOF) //���ϳ� �����ϴ� ���
			return 1;
		else if (str != fgetc(f2)) 
			return 0;
		else continue;
	}
}
int main(void) {
	//���� ����
	FILE* f1 = fopen("d1.txt", "rt");
	FILE* f2 = fopen("d2.txt", "rt");
	if (f1 == NULL || f2 == NULL) {
		puts("���� ���� ����!\n");
		return -1;
	}
	//��� ���
	printf("C:\\test>28_5 d1.txt d2.txt\n");
	if (IsFileSame(f1, f2) == 1) printf("�� �ؽ�Ʈ ������ �����ϴ�.\n");
	else printf("�� �ؽ�Ʈ ������ �ٸ��ϴ�.\n");
	//���� �ݱ�
	fclose(f1);
	fclose(f2);
	return 0;
}