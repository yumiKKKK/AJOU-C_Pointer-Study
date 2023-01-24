#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
프로그램 : 회문(Palindrome) 여부 출력 프로그램
**대소문자까지 일치해야 회문이다.**
입력: 문자열
*/
//문자열 길이 계산해서 반환하는 함수 
//-> string.h에 선언된 strlen 함수 사용으로 대체가능
int vocaLen(char *voca) {
	int count = 0;
	while (voca[count] != '\0')
		count++;
	return count;
}
//인자의 회문 여부를 출력하는 함수
void Palindrome(char *voca, int len) {
	int flag = -1;
	for (int i = 0; i < len / 2; i++) {//문자열 길이의 반에 해당하는 숫자만큼 반복
		if (voca[i] != voca[len - i - 1]){ //배열의 앞과 뒤 각각 문자 하나씩 가져와 비교하여 다르면
			flag = 0; // flag에 0저장
		}
	}
	if (flag==0) printf("회문이 아닙니다.\n"); //문자 하나라도 다르면 회문이 아니다.
	else printf("회문 입니다.\n"); //모든 문자가 같으면 회문이다.
}
//main함수 시작
int main(void) {
	//문자열 입력받기
	char voca[100];
	printf("문자열 입력 : ");
	scanf("%s", voca);
	//함수호출
	Palindrome(&voca, vocaLen(&voca));
	return 0;
}
