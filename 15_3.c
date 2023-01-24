#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
프로그램: 입력받은 숫자가 홀수면 배열의 앞부터 저장하고 짝수면 뒤부터 저장하는 프로그램
입력: 총 10개의 정수
*/
// main함수 시작
int main(void) {
	int num = 0, idx1 = 0, idx2=10;
	int arr[10], res[10]; 
	printf("총 10개의 숫자 입력\n");
	for (int i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &num); //10개의 정수 입력 받기
		if (num%2 != 0) { //홀수일때
			res[idx1]=num; //앞부터 저장
			idx1++;
		}
		else { //짝수일때
			res[idx2-1]=num; //뒤부터 저장
			idx2--;
		}
	}
	printf("배열 요소의 출력 : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", res[i]); //배열 출력
	}
	return 0;
}