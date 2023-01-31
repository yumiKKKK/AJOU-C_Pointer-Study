#include <stdio.h>
int main(void) {
	int* arr1[5];
	int* arr2[3][5];

	int **parr1 = arr1;
	int*(*parr2)[5] = arr2;
}