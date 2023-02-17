#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	int* nums = (int*)malloc(sizeof(int) * 5); //동적할당
	int idx = 0;
	int maxlen = 5;
	while (1) {
		printf("정수입력: ");
		scanf("%d", &nums[idx]); //정수입력받기
		if (nums[idx] == -1) //-1입력시 반복문 탈출
			break;
		if (idx + 1 == maxlen) {
			maxlen += 3;//메모리 공간 3씩 확장
			realloc(nums, sizeof(int) * maxlen);
		}
		idx += 1;
	}
	int i = 0;
	while (i < idx)
		printf("%d ", nums[i++]);
	free(nums); //메모리 해제
	return 0;
}