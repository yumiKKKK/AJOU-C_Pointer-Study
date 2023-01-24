#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//변수 num에 저장된 값의 제곱을 계산하는 함수들
//call-by-value기반:
int SquareByValue(int num) { //값을 인자로 받기
	return num * num; //값의 제곱 반환
}
//call-by-reference기반:
int SquareByReference(int *num) { //변수의 주소값을 인자로 받기
	*num *= (*num); //변수에 저장된 값의 제곱을 다시 변수에 저장
	return *num;
}
//main함수 시작
int main(void) {
	int num;
	printf("정수 입력:");
	scanf("%d", &num); //변수 입력받기

	printf("call-by-value기반 제곱 계산: %d\n", SquareByValue(num));
	printf("num에 저장된 값: %d\n\n", num);
	printf("call-by-reference기반 제곱 계산: %d\n", SquareByReference(&num));
	printf("num에 저장된 값: %d\n", num);
	return 0;
}