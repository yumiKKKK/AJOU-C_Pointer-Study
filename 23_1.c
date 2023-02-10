#include <stdio.h>
typedef struct point {
	int xpos;
	int ypos;
} Point; //����ü ���� ����

//����ü ������ ����� ���� ���� �ٲ��ִ� SwapPoint �Լ� ����
void SwapPoint(Point *pos1, Point *pos2) {
	Point tmp={pos1->xpos, pos1->ypos};
	Point *ptr = &tmp;
	pos1->xpos = pos2->xpos;
	pos1->ypos = pos2->ypos;
	pos2->xpos = ptr->xpos;
	pos2->ypos = ptr->ypos;
}
//����ü ������ ����� ���� ����ϴ� ShowPoint �Լ� ����
void ShowPoint(Point pos) {
	printf("(%d, %d)\n", pos.xpos, pos.ypos);
}
int main(void) {
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };
	printf("pos1: (2, 4) \npos2: (5, 7) \n\n");
	SwapPoint(&pos1, &pos2); //�Լ� ȣ��
	//����ü�� ����Ͽ� �ùٸ��� �ٲ����� Ȯ��
	printf("pos1: "); ShowPoint(pos1);
	printf("pos2: "); ShowPoint(pos2);
}