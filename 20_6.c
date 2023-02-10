#define _CRT_SECURE_NO_WARNINGS

/*
열혈C 20장
도전!프로그래밍3 도전6
[숫자 맞추기 게임 == 야구 게임]
프로그램: 숫자 맞추기 게임
입력: 0~9 범위의 서로 다른 숫자 세 개
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	//컴퓨터가 고른 숫자 배열 cp에 저장
	char cp[3] = { 0, };
	srand((int)time(NULL));
	for (int i = 0; i < 3; i++) {
		cp[i] = rand() % 10;
		//숫자 중복 방지 코드:
		for (int j = 0; j < i; j++){
			if (cp[j] == cp[i])
				i--;
		}
	}
	printf("Start Game!\n");
	//3strike 얻을 때까지 반복
	int count = 0; //몇 번 만에 3strike인지 세는 count변수
	int strike = 0, ball;
	while (strike < 3) {
		count += 1;
		//사용자 숫자 입력받기
		int user[3] = { 0, };
		printf("3개의 숫자 선택: ");
		scanf("%d %d %d", &user[0], &user[1], &user[2]);
		//strike와 ball개수 세기
		strike = 0, ball = 0;
		for (int i = 0; i < 3; i++) {
			if (user[i] == cp[i])
				strike++;
			else if ((user[0] == cp[i]) | (user[1] == cp[i]) | (user[2] == cp[i]))
				ball++;
		}
		//도전 결과 출력
		printf("%d번째 도전 결과: %dstrike, %dball!!\n", count, strike, ball);
	}
	printf("\n\nGame Over!\n");
	return 0;
}
