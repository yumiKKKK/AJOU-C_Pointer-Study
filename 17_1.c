#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void MaxAndMin(int**, int**, int*, int); //함수 정의
int main(void) {
	//두 포인터변수와 배열 선언 
	int* maxPtr;
	int* minPtr;
	int arr[5];

	//배열 요소 입력 받기
	int i;
	for (i = 0; i < 5; i++) {
		printf("%d번째 정수 입력: ", i+1);
		scanf("%d", &arr[i]);
	}

	//두 포인터변수와 배열을 전달
	MaxAndMin(&maxPtr, &minPtr, arr, sizeof(arr) / sizeof(int)); 

	//출력
	printf("입력된 정수: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n가장 큰 값: %d\n가장 작은 값: %d\n", *maxPtr, *minPtr);
	return 0;
}
//함수 선언
void MaxAndMin(int** maxD, int** minD, int* arr, int len) {
	//포인터 변수 선언 및 초기화
	int* max, * min;
	max = min = &arr[0];
	//max, min에 가장 큰 값과 가장 작은 값 저장
	int i;
	for (i = 0; i < len; i++) {
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}
	//이중 포인터 변수를 max와 min으로 초기화
	*maxD = max;
	*minD = min;
}