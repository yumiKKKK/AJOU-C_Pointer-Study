#include "28_3.h"

//µ¡¼À°ú °ö¼À ÇÔ¼ö Á¤ÀÇ
Complex ADD(Complex c1, Complex c2) {
	Complex res;
	res.real = c1.real + c2.real;
	res.imagin = c1.imagin + c2.imagin;
	return res;
}
Complex MUL(Complex c1, Complex c2) {
	Complex res;
	res.real = c1.real * c2.real - c1.imagin * c2.imagin;
	res.imagin = c1.imagin * c2.real + c1.real * c2.imagin;
	return res;
}