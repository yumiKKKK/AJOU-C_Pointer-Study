#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//���� index ��ȯ�ϴ� �Լ�
int space(char* str, int len) {
	int i;
	for (i = 0; i < len; i++) {
		if (str[i] == ' ')
			return i;
	}
	return -1; //��� ������: ������ ���� ���
}

int main(void) {
	//�� ����� �̸� ���� �Է� �ޱ�
	puts("�̸� ���� �Է�:");
	char str1[50], str2[50];
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	//�Լ� ȣ���Ͽ� ���� ��ġ Ȯ��
	int s1 = sizeof(str1), s2 = sizeof(str2);
	int idx1 = space(str1, s1);
	int idx2 = space(str2, s2);

	//�̸� ���ڿ� ��
	if (idx1 != idx2) //���� �ٸ��� �̸��� �ٸ��Ƿ�
		puts("�̸��� �ٸ��ϴ�.");
	else if (!strncmp(str1, str2, idx1))  //������ ��
		puts("�̸��� �����ϴ�.");
	else
		puts("�̸��� �ٸ��ϴ�.");
	//���� ���ڿ� ��
	if (atoi(&str1[idx1+1])== atoi(&str2[idx2+1]))
		puts("���̰� �����ϴ�.");
	else
		puts("���̰� �ٸ��ϴ�.");

}