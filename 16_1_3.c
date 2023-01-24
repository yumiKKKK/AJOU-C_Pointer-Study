#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//네 사람의 네 과목 점수 입력받기
	int arr[5][5]={0,};
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("학생%d의 과목%d 점수: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < 4; i++) { 
		for (j = 0; j < 4; j++) {
			arr[i][4] += arr[i][j];//개인별 총점 계산
			arr[4][i] += arr[j][i];//과목별 총점 계산
		}
		arr[4][4] += arr[i][4];
	}
	//출력
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d행 %d열: %2d ",i+1,j+1, arr[i][j]);
		}
		printf("\n");
	}
}