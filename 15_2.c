#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
프로그램: 10진수를 2진수로 변환하여 출력하는 프로그램
입력: 10진수 정수 하나
*/
int main(void) {
	//10진수 입력받기
	int num;
	printf("10진수 정수 입력: ");
	scanf("%d", &num);
	int arr[50]={0, }, idx=0;
	while (num > 0) { //몫이 0이 될 때까지 2로 나누기
		arr[idx] = num % 2; //나머지를 arr배열에 저장
		num /= 2; 
		idx++;
	}
	while (idx > 0) {
		printf("%d", arr[idx-1]); //arr배열 역순으로 출력한 것이 2진수
		idx--;
	}
}