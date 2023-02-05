/*
열혈C 20장
도전!프로그래밍3 도전4
[난수 생성2]
프로그램: 두 주사위를 던졌을 때 결과를 출력하는 프로그램
->실행 시마다 다른 정수 하나를 얻는 프로그램의 응용
*/
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((int)time(NULL)); //현재시간으로 씨드 설정
	for (int i = 0; i < 2; i++)
		printf("주사위 %d의 결과 %d\n", i+1, rand() % 5 + 1);// %연산자로 범위 설정
	return 0;
}