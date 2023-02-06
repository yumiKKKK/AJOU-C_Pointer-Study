#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct employee {
	char name[20];
	char ID[20];
	int salary;
};
int main(void) {
	//길이가 3인 배열 선언
	struct employee pos[3];
	//사용자 입력 받기
	for (int i = 0; i < 3; i++) {
		printf("%d번째 사람 이름: ", i + 1);  scanf("%s", pos[i].name);
		printf("%d번째 사람 민증: ", i + 1);  scanf("%s", pos[i].ID);
		printf("%d번째 사람 봉급: ", i + 1);  scanf("%d", &pos[i].salary);
	}
	//출력
	for (int i = 0; i < 3; i++) {
		printf("\n%d번째 사람 이름: %s\n", i + 1, pos[i].name);
		printf("%d번째 사람 민증: %s\n", i + 1, pos[i].ID);
		printf("%d번째 사람 봉급: %d\n\n", i + 1, pos[i].salary);
	}
	return 0;
}