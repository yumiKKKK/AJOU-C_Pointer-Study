#include <stdio.h>
//�� ������ ��������� ��ȯ�ϴ� ��ũ�� �Լ�
#define SUM(x, y, z) ((x)+(y)+(z))
//�� ������ ��������� ��ȯ�ϴ� ��ũ�� �Լ�
#define MUL(x, y, z) ((x)*(y)*(z))
int main(void) {
	printf("���� 1,2,3\n��: %d \n��: %d\n", SUM(1,2,3), MUL(1,2,3));
	return 0;
}