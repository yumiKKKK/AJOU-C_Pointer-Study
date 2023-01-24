#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
프로그램 : 배열 저장 요소들을 내림차순으로 정렬하는 프로그램
**버블 정렬**
입력: 7개의 정수
*/
//배열을 인자로 받아 내림차순으로 정렬하는 함수
void DesSort(int *arr, int len) {
	for (int i = 0; i < len - 1; i++) { //정렬되지 않은 숫자만 비교하는 for문
		for (int j = 0; j < len - 1 - i; j++) { //맨앞부터 비교하여 가장 작은 값을 뒤로 보내는 for문
			if (arr[j] < arr[j + 1]) { //앞 저장된 값이 뒤에 저장된 값보다 크면
				//저장된 위치 바꾸기
				int tmp = arr[j]; 
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main(void) {
	//7개의 정수 입력받기
	int arr[7];
	for (int i = 0; i < 7; i++) {
		printf("입력: ");
		scanf("%d", &arr[i]);
	}
	//함수 호출
	DesSort(arr, sizeof(arr)/sizeof(int));
	//정렬된 배열요소 출력
	for (int i = 0; i < 7; i++)
		printf("%d ", arr[i]);
	return 0;
}