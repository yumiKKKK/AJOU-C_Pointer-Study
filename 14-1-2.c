#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//세 변수에 저장된 값을 서로 뒤바꾸는 함수
void Swap(int* num1, int* num2, int* num3) {
	int tmp = *num1;
	*num1 = *num3;
	*num3 = *num2;
	*num2 = tmp;
}

//main함수 시작
int main(void) {
	int num1, num2, num3;
	printf("세 변수를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3); //세 변수 입력 받기
	Swap(&num1, &num2, &num3); //swap함수 호출
	printf("뒤바꾼 결과: %d %d %d\n", num1, num2, num3); //결과 출력
	return 0;
}