#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int* nums = (int*)malloc(sizeof(int) * 5); //�����Ҵ�
	int idx = 0;
	int maxlen = 5;
	while (1) {
		printf("�����Է�: ");
		scanf("%d", &nums[idx]); //�����Է¹ޱ�
		if (nums[idx] == -1) //-1�Է½� �ݺ��� Ż��
			break;
		if (idx + 1 == maxlen) {
			maxlen += 3;//�޸� ���� 3�� Ȯ��
			realloc(nums, sizeof(int) * maxlen);
		}
		idx += 1;
	}
	int i = 0;
	while (i < idx)
		printf("%d ", nums[i++]);
	free(nums); //�޸� ����
	return 0;
}