#define _CRT_SECURE_NO_WARNINGS

/*
����C 20��
����!���α׷���3 ����6
[���� ���߱� ���� == �߱� ����]
���α׷�: ���� ���߱� ����
�Է�: 0~9 ������ ���� �ٸ� ���� �� ��
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	//��ǻ�Ͱ� �� ���� �迭 cp�� ����
	char cp[3] = { 0, };
	srand((int)time(NULL));
	for (int i = 0; i < 3; i++) 
		cp[i] = rand() % 9;

	printf("Start Game!\n");
	//3strike ���� ������ �ݺ�
	int count = 0; //�� �� ���� 3strike���� ���� count����
	int strike = 0, ball;
	while (strike < 3) {
		count += 1;
		//����� ���� �Է¹ޱ�
		int user[3] = { 0, };
		printf("3���� ���� ����: ");
		scanf("%d %d %d", &user[0], &user[1], &user[2]);
		//strike�� ball���� ����
		strike = 0, ball = 0;
		for (int i = 0; i < 3; i++) {
			if (user[i] == cp[i])
				strike++;
			else if ((user[0] == cp[i]) | (user[1] == cp[i]) | (user[2] == cp[i]))
				ball++;
		}
		//���� ��� ���
		printf("%d��° ���� ���: %dstrike, %dball!!\n", count, strike, ball);
	}
	printf("\n\nGame Over!\n");
	return 0;
}