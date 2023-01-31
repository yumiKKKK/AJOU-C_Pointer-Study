#include <stdio.h>
void ComplexFuncOne(int **parr1, int *(*parr2)[5]) { printf("success\n"); };
void ComplexFuncTwo(int ***parr3, int ***(*parr4)[5]) { printf("success\n"); };
int main(void) {
	//Q3
	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];

	ComplexFuncOne(arr1, arr2);
	ComplexFuncTwo(arr3, arr4);

	//Q4 출력결과
	int arr[3][2] = { {1,2},{3,4},{5,6} };
	printf("%d %d\n", arr[1][0], arr[0][1]); //3 2
	printf("%d %d\n", *(arr[2]+1), *(arr[1] + 1)); //6 4
	printf("%d %d\n", (*(arr+2))[0], (*(arr + 0))[1]); //5 2
	printf("%d %d\n", **arr, *(*(arr + 0)+0)); //1 1

	//Q5 arr[1][0][1]을 대신할 수 있는 문장 5개
	int arrr[2][2][2] = { 1,2,3,4,5,6,7,8 };
	printf("%d\n", arrr[1][0][1]);
	/*
	(*(arrr+1))[0][1]
	(*(*(arrr+1)+0))[1]
	*(*(*(arrr+1)+0)+1)
	(*(arrr[1]+0))[1]
	*(*(arrr[1]+0)+1)
	*(arrr[1][0]+1)
	*/
	return 0;
}