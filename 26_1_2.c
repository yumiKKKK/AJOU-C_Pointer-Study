#include <stdio.h>
//������ ��ũ�� �Լ��� ����
#define PI 3.14159265
//�� ���� ���ϴ� ��ũ�� �Լ� ����
#define AREA(r) ((r)*(r)*(PI))
int main(void) {
	printf("������ 5\n�� ����: %g \n", AREA(5));
	return 0;
}