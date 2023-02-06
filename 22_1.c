#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//구조체 정의
struct employee {
	char name[20]; //종업원 이름
	char ID[20]; //주민등록증 번호
	int salary; //급여정보
};
int main(void) {
	struct employee pos; //구조체 변수 선언
	//사용자 정보 입력
	printf("종업원 이름 입력: "); scanf("%s", pos.name);
	printf("주민등록증 번호 입력: "); scanf("%s", pos.ID);
	printf("급여정보 입력: "); scanf("%d", &pos.salary);
	//저장된 데이터 출력
	printf("\n\n");
	printf("종업원 이름 : %s\n", pos.name);
	printf("주민등록증 번호 : %s\n", pos.ID);
	printf("급여정보 : %d\n", pos.salary);
	return 0;
}