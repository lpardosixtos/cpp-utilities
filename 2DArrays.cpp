#include "2Darrays.h"

d2DArray::d2DArray(int r, int c){
	A=new double* [r];
	for(int i=0; i<r; i++) A[i]=new double[c];
}
d2DArray::~d2DArray(){
	for(int i=0; i<rows; i++) delete[] A[i];
	delete[] A;
}
double*& d2DArray::operator[]( int d1){
	return A[d1];
}
