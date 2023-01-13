#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//열혈 C 문제11-1 [1차원 배열의 활용]
int main() {
	////문제1
	printf("Q11-1-1\n");
	int arr[5]; //배열 선언
	printf("총 5개의 정수를 입력하세요.:");
	for (int i = 0; i < 5; i++) //사용자 배열 입력
		scanf("%d", &arr[i]);
	//최댓값
	int max = arr[0];
	for (int i = 1; i < 5; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	printf("최솟값: %d\n", max);
	//최솟값
	int min = arr[0];
	for (int i = 1; i < 5; i++) {
		if (min > arr[i]) 
			min = arr[i];
	}
	printf("최댓값: %d\n", min);
	//총 합
	int total = 0;
	for (int i = 0; i < 5; i++)
		total += arr[i];
	printf("총 합: %d\n", total);

	////문제 2
	printf("\nQ11-1-2\n");
	char arr2[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
	int ar2Len = sizeof(arr2) / sizeof(char);
	for (int i = 0; i < ar2Len; i++) {
		printf("%c", arr2[i]);
	}
	printf("\n");
	return 0;
}
