#include <stdio.h>
//두 값 중 큰 것 반환하는 매크로 함수로 정의
#define MAX(a, b) ((a)>(b) ? (a) : (b))
int main(void) {
	printf("숫자 50, 40\n큰 값: %d \n", MAX(50, 40));
	return 0;
}