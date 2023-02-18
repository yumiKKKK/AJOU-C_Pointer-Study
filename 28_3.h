typedef struct complex {
	double real; //실수
	double imagin; //허수
}Complex; //복소수 저장하는 구조체

//덧셈과 곱셈 함수 선언
Complex ADD(Complex c1, Complex c2);
Complex MUL(Complex c1, Complex c2);