#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//����11-2 �迭 ����� ���ڿ� ǥ��
int main() {
	//����1
	printf("�ϳ��� ���ܾ �Է��ϼ���.:");
	char str[100] ;
	scanf("%s", str);
	int len=0;
	while (str[len] != '\0')
		len++;
	printf("���ܾ��� ����: %d\n", len);

	//����2
	printf("\n�ϳ��� ���ܾ �Է��ϼ���.:");
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
	printf("����: %s\n", str2);

	//����3
	printf("\n�ϳ��� ���ܾ �Է��ϼ���.:");
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
	printf("���� ū �ƽ�Ű�ڵ带 ���� ����: %c\n", a);
	return 0;
}