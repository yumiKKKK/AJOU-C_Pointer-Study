#include <stdio.h>
void SimpleFuncOne(int *arr1, int *arr2) { printf("success\n"); };
void SimpleFuncTwo(int (*arr3)[4], int (*arr4)[4]) { printf("success\n"); };
int main(void) {
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	SimpleFuncOne(arr1, arr2);
	SimpleFuncTwo(arr3, arr4);
}