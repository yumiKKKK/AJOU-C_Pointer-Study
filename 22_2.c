#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct employee {
	char name[20];
	char ID[20];
	int salary;
};
int main(void) {
	//���̰� 3�� �迭 ����
	struct employee pos[3];
	//����� �Է� �ޱ�
	for (int i = 0; i < 3; i++) {
		printf("%d��° ��� �̸�: ", i + 1);  scanf("%s", pos[i].name);
		printf("%d��° ��� ����: ", i + 1);  scanf("%s", pos[i].ID);
		printf("%d��° ��� ����: ", i + 1);  scanf("%d", &pos[i].salary);
	}
	//���
	for (int i = 0; i < 3; i++) {
		printf("\n%d��° ��� �̸�: %s\n", i + 1, pos[i].name);
		printf("%d��° ��� ����: %s\n", i + 1, pos[i].ID);
		printf("%d��° ��� ����: %d\n\n", i + 1, pos[i].salary);
	}
	return 0;
}