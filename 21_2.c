#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	//������ ������ ���ڿ� �Է� �ޱ�
	char str[50];
	puts("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	//���� �� �� ���
	int i = 0, res = 0;
	for(int i=0; i<strlen(str); i++){
		if ('1' <= str[i] && str[i] <= '9')
			res += str[i] + (1-'1');
	}
	printf("���ڿ� �ȿ� �����ϴ� ������ ����: %d\n", res);
}