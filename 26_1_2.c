#include <stdio.h>
//원주율 매크로 함수로 정의
#define PI 3.14159265
//원 넓이 구하는 매크로 함수 정의
#define AREA(r) ((r)*(r)*(PI))
int main(void) {
	printf("반지름 5\n원 넓이: %g \n", AREA(5));
	return 0;
}