#define _CRT_SECURE_NO_WARNINGS

/*
����C 20��
����!���α׷���3 ����5
[���� ����3]
���α׷�: ���������� ���α׷� 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//���������� ����� ��� �� ��ȯ�ϴ� �Լ�
int WinLose(int n1, int n2, int *count) { //������ ���� �����Ͽ� WinLose�Լ� �ۿ��� ����Ѵ�.
	char *res[3] = {"����", "����", "��"}; //������ �迭 �ʱ�ȭ
	printf("����� %s ����, ��ǻ�ʹ� %s ����, ", res[n1-1], res[n2-1]);
	if (n1 == n2) { //(1,1), (2,2), (3,3)�̸� ���Ƿ�
		count[1] += 1; //���� Ƚ�� ����
		printf("�����ϴ�!\n");
		return 2; 
	}
	else if ((n1 < n2 && n2-n1==1)||(n1==3 && n2==1)) { // (1,2), (2,3), (3,1)�̸� �̱�Ƿ�
		count[0] += 1; //�̱�� Ƚ�� ����
		printf("����� �̰���ϴ�!\n");
		return 1; 
	}
	else {
		printf("����� �����ϴ�!\n");
		return 0; //while�� Ż���� �� �ֵ��� 0 ��ȯ
	}
}

int main(void) {
	int res = -1;
	int count[2] = { 0, };
	//����ڰ� �� ������ �ݺ�
	while (res) {
		//���������� �Է¹ޱ�
		int user=-1;
		printf("������ 1, ������ 2, ���� 3: ");
		scanf("%d", &user);

		//���� ����
		srand((int)time(NULL));
		int num = rand() % 2 + 1;

		//�Լ� ȣ��
		res = WinLose(user, num, count);
	}
	printf("\n������ ��� : %d��, %d��\n", count[0], count[1]);//���� ��� ���
	return 0;
}