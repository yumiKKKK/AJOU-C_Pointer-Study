#define _CRT_SECURE_NO_WARNINGS

/*
열혈C 20장
도전!프로그래밍3 도전5
[난수 생성3]
프로그램: 가위바위보 프로그램 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//가위가위보 결과를 출력 및 반환하는 함수
int WinLose(int n1, int n2, int *count) { //포인터 변수 선언하여 WinLose함수 밖에서 사용한다.
	char *res[3] = {"바위", "가위", "보"}; //포인터 배열 초기화
	printf("당신은 %s 선택, 컴퓨터는 %s 선택, ", res[n1-1], res[n2-1]);
	if (n1 == n2) { //(1,1), (2,2), (3,3)이면 비기므로
		count[1] += 1; //비기는 횟수 세기
		printf("비겼습니다!\n");
		return 2; 
	}
	else if ((n1 < n2 && n2-n1==1)||(n1==3 && n2==1)) { // (1,2), (2,3), (3,1)이면 이기므로
		count[0] += 1; //이기는 횟수 세기
		printf("당신이 이겼습니다!\n");
		return 1; 
	}
	else {
		printf("당신이 졌습니다!\n");
		return 0; //while문 탈출할 수 있도록 0 반환
	}
}

int main(void) {
	int res = -1;
	int count[2] = { 0, };
	//사용자가 질 때까지 반복
	while (res) {
		//가위바위보 입력받기
		int user=-1;
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf("%d", &user);

		//난수 생성
		srand((int)time(NULL));
		int num = rand() % 2 + 1;

		//함수 호출
		res = WinLose(user, num, count);
	}
	printf("\n게임의 결과 : %d승, %d무\n", count[0], count[1]);//게임 결과 출력
	return 0;
}