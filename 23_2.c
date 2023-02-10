#include <stdio.h>
typedef struct point {
	int xpos;
	int ypos;
} Point; //구조체1 선언
typedef struct {
	Point lpos;
	Point rpos;
} Rectangle;//구조체2 선언

//직사각형의 넓이를 계산해서 출력하는 함수
void Area(Rectangle rec) {
	int width = (rec.rpos.xpos - rec.lpos.xpos);
	int height = (rec.rpos.ypos - rec.lpos.ypos);
	printf("넓이: %d\n", width * height);
}

//직사각형의 네 점의 좌표정보를 출력하는 함수
void Info(Rectangle rec) {
	printf("네 점의 좌표: ");
	printf("(%d %d) ", rec.lpos.xpos, rec.lpos.ypos);
	printf("(%d %d) ", rec.rpos.xpos, rec.lpos.ypos);
	printf("(%d %d) ", rec.rpos.xpos, rec.rpos.ypos);
	printf("(%d %d) \n", rec.lpos.xpos, rec.rpos.ypos);
}

int main(void) {
	Rectangle rec1 = { 0,0,100,100 };
	Area(rec1);
	Info(rec1);
	return 0;
}