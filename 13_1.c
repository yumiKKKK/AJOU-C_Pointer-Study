#include <stdio.h>

int main() {
	//문제1
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	for (int i = 0; i < 5; i++)  //ptr저장된 값 변경
		*(ptr++) += 2;
	printf("모든 배열의 요소의 값을 2씩 증가시킨 결과:");
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]); //배열요소 접근
	printf("\n");

	//문제2
	int arr2[5] = { 1,2,3,4,5 };
	int* ptr2 = arr2;
	for (int i = 0; i < 5; i++) //ptr대상으로 덧셈연산 
		*(ptr2 + i) += 2;
	printf("모든 배열의 요소의 값을 2씩 증가시킨 결과:");
	for (int i = 0; i < 5; i++)
		printf("%d ", arr2[i]); //배열요소 접근
	printf("\n");

	//문제3
	int arr3[5] = { 1,2,3,4,5 };
	int* ptr3 = &arr3[4]; //**배열의 마지막 요소를 가리키는 포인터 변수
	int total = 0;
	for (int i = 0; i < 5; i++) 
		total += *(ptr3--);
	printf("배열의 정수 총합 : %d\n", total);

	//문제4
	int arr4[6] = { 1,2,3,4,5,6 };
	int* fptr = arr4, * bptr = &arr4[5]; //배열의 앞과 뒤를 가리키는 포인터 변수 2개
	int tmp=NULL;
	for (int i = 0; i < 3; i++) {
		tmp = *fptr;
		*fptr = *bptr;
		*bptr = tmp;
		fptr++;
		bptr--;
	}
	printf("배열 역순: ");
	for (int i = 0; i < 6; i++)
		printf("%d ", arr4[i]);
	printf("\n");

	return 0;
}