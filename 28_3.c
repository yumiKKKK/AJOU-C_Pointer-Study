#define _CRT_SECURE_NO_WARNINGS
/*
두 복소수를 대상으로 덧셈과 곱셈하는 프로그램
2023-02-18
*/
#include <stdio.h>
#include "28_3.h"
int main(void) {
	//2개의 복소수 입력받기
	Complex com[2]; //구조체 배열 선언
	for (int i = 0; i < 2; i++) {
		printf("복소수 입력%d[실수 허수]: ", i + 1);
		scanf("%lf %lf", &com[i].real, &com[i].imagin);
	}
	//결과 출력하기
	printf("합의 결과] 실수: %lf, 허수: %lf\n", ADD(com[0], com[1]).real, ADD(com[0], com[1]).imagin);
	printf("곱의 결과] 실수: %lf, 허수: %lf\n", MUL(com[0], com[1]).real, MUL(com[0], com[1]).imagin);
	return 0;
}