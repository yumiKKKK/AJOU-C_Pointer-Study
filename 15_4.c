#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
���α׷� : ȸ��(Palindrome) ���� ��� ���α׷�
**��ҹ��ڱ��� ��ġ�ؾ� ȸ���̴�.**
�Է�: ���ڿ�
*/
//���ڿ� ���� ����ؼ� ��ȯ�ϴ� �Լ� 
//-> string.h�� ����� strlen �Լ� ������� ��ü����
int vocaLen(char *voca) {
	int count = 0;
	while (voca[count] != '\0')
		count++;
	return count;
}
//������ ȸ�� ���θ� ����ϴ� �Լ�
void Palindrome(char *voca, int len) {
	int flag = -1;
	for (int i = 0; i < len / 2; i++) {//���ڿ� ������ �ݿ� �ش��ϴ� ���ڸ�ŭ �ݺ�
		if (voca[i] != voca[len - i - 1]){ //�迭�� �հ� �� ���� ���� �ϳ��� ������ ���Ͽ� �ٸ���
			flag = 0; // flag�� 0����
		}
	}
	if (flag==0) printf("ȸ���� �ƴմϴ�.\n"); //���� �ϳ��� �ٸ��� ȸ���� �ƴϴ�.
	else printf("ȸ�� �Դϴ�.\n"); //��� ���ڰ� ������ ȸ���̴�.
}
//main�Լ� ����
int main(void) {
	//���ڿ� �Է¹ޱ�
	char voca[100];
	printf("���ڿ� �Է� : ");
	scanf("%s", voca);
	//�Լ�ȣ��
	Palindrome(&voca, vocaLen(&voca));
	return 0;
}
