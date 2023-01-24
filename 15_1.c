#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
프로그램: 홀수와 짝수를 구분지어 출력하는 프로그램
입력: 10개의 정수
*/
//배열내 홀수만 출력하는 함수
void PrintOdd(int* arr) {
	//홀수 개수 계산
	int count = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			count++;
		}
	}
	//홀수 출력
	printf("홀수 출력:");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			printf(" %d", arr[i]);
			count--;
			if (count >= 1) { //마지막 홀수 제외 ',' 출력
				printf(",");
			}
		}
	}
	printf("\n");
}
//배열내 짝수만 출력하는 함수
void PrintEven(int* arr) {
	//짝수 개수 계산
	int count = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			count++;
		}
	}
	//짝수 출력
	printf("짝수 출력:");
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			printf(" %d", arr[i]);
			count--;
			if (count >= 1) { //마지막 짝수 제외 ',' 출력
				printf(",");
			}
		}
	}
	printf("\n");
}

//main함수 시작
int main(void) {
	int arr[10]; //길이 10인 배열 선언
	//10개의 정수 입력 받기
	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &arr[i]);
	}
	//함수 호출
	PrintOdd(&arr);
	PrintEven(&arr);
	return 0;
}