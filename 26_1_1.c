#include <stdio.h>
//세 정수의 덧셈결과를 반환하는 매크로 함수
#define SUM(x, y, z) ((x)+(y)+(z))
//세 정수의 곱셈결과를 반환하는 매크로 함수
#define MUL(x, y, z) ((x)*(y)*(z))
int main(void) {
	printf("정수 1,2,3\n합: %d \n곱: %d\n", SUM(1,2,3), MUL(1,2,3));
	return 0;
}