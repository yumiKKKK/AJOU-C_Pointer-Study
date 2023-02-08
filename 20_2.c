#define _CRT_SECURE_NO_WARNINGS
/*
열혈C 20장
도전!프로그래밍3 도전2
[달팽이 배열]
프로그램: 사용자가 입력한 n*n길이의 달팽이 배열을 만들어서 출력하는 프로그램
입력: 정수 n
*/

#include <stdio.h>
#include <math.h>
#define size 20

//달팽이 배열로 채워넣는 함수
void snail(int n) {
	int arr[size][size]; //배열 생성
	int num = n; //길이 보존
	int x = 0, y = -1; //배열 위치
	int dir = 1; //채우는 방향
	int val = 0; //채우는 값
	while (n > 0) {
		for (int i = 0; i < n; i++) { //가로 채워넣기
			y += dir;
			val += 1;
			arr[x][y] = val;
		}
		n--;
		for (int j = 0; j < n; j++) { //세로 채워넣기
			x += dir;
			val += 1;
			arr[x][y] = val;
		}
		dir *= (-1);
	}
	//배열 출력
	printf("\n\n달팽이 배열:\n");
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			printf("%3d ",arr[i][j]);
		}
		printf("\n");
	}
}

//main함수 시작
int main(void) {
	//정수 입력받기
	int n;
	printf("숫자를 입력하시오 : ");
	scanf("%d", &n);

	//함수호출
	snail(n);

	return 0;
}