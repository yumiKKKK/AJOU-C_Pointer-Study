/*
열혈C 20장
도전!프로그래밍3 도전3
[난수 생성]
프로그램: 0~99범위의 난수를 5개 생성하는 프로그램
-> 0~RAND_MAX범위의 난수 5개 생성하는 프로그램의 응용
*/
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i; 
	printf("난수의 범위: 0부터 99까지\n");
	for (int i = 0; i < 5; i++) {
		printf("난수 출력: %d\n", rand()%99);//%연산자로 범위 설정
	}
	return 0;
}