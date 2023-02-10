#include <stdio.h>
typedef struct point {
	int xpos;
	int ypos;
} Point; //����ü1 ����
typedef struct {
	Point lpos;
	Point rpos;
} Rectangle;//����ü2 ����

//���簢���� ���̸� ����ؼ� ����ϴ� �Լ�
void Area(Rectangle rec) {
	int width = (rec.rpos.xpos - rec.lpos.xpos);
	int height = (rec.rpos.ypos - rec.lpos.ypos);
	printf("����: %d\n", width * height);
}

//���簢���� �� ���� ��ǥ������ ����ϴ� �Լ�
void Info(Rectangle rec) {
	printf("�� ���� ��ǥ: ");
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