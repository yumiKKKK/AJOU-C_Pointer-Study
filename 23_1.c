#include <stdio.h>
typedef struct point {
	int xpos;
	int ypos;
} Point; //구조체 변수 선언

//구조체 변수에 저장된 값을 서로 바꿔주는 SwapPoint 함수 정의
void SwapPoint(Point *pos1, Point *pos2) {
	Point tmp = *pos1;
	*pos1=*pos2;
	*pos2=tmp;
}
//구조체 변수에 저장된 값을 출력하는 ShowPoint 함수 정의
void ShowPoint(Point pos) {
	printf("(%d, %d)\n", pos.xpos, pos.ypos);
}
int main(void) {
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };
	printf("pos1: (2, 4) \npos2: (5, 7) \n\n");
	SwapPoint(&pos1, &pos2); //함수 호출
	//구조체를 출력하여 올바르게 바꼈는지 확인
	printf("pos1: "); ShowPoint(pos1);
	printf("pos2: "); ShowPoint(pos2);
}
