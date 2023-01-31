/*
열혈C 20장 
도전!프로그래밍3 도전1
[배열의 회전]
프로그램: 1~16이 저장된 4*4 배열의 요소들을 시계방향으로 90도 회전시켜 결과를 출력하는 프로그램
*/
#include <stdio.h>
//4*4 배열을 90도 회전시키는 함수 선언 
void rotate(int (*arr)[4]) {
	//90도 회전
	int arr2[4][4]={0,};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			arr2[i][j] = arr[i][j];
	}
	int k = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			arr[i][j] = arr2[3 - j][k];
		k++;
	}
}
//2차원 배열 출력하는 함수
void print(int(*arr)[4], int col) {
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < 4; j++)
			printf("%2d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}
int main(void) {
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 }; //배열 선언 및 초기화
	print(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < 3; i++) {
		printf("%d번째 회전: \n", i + 1);
		rotate(arr); //함수 호출
		print(arr, sizeof(arr) / sizeof(arr[0]));
	}
	return 0;
}