#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����ü ����
struct employee {
	char name[20]; //������ �̸�
	char ID[20]; //�ֹε���� ��ȣ
	int salary; //�޿�����
};
int main(void) {
	struct employee pos; //����ü ���� ����
	//����� ���� �Է�
	printf("������ �̸� �Է�: "); scanf("%s", pos.name);
	printf("�ֹε���� ��ȣ �Է�: "); scanf("%s", pos.ID);
	printf("�޿����� �Է�: "); scanf("%d", &pos.salary);
	//����� ������ ���
	printf("\n\n");
	printf("������ �̸� : %s\n", pos.name);
	printf("�ֹε���� ��ȣ : %s\n", pos.ID);
	printf("�޿����� : %d\n", pos.salary);
	return 0;
}