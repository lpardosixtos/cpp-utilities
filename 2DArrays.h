#ifndef D2Arrays_H
#define D2Arrays_H


class d2DArray{
private:
	double** A;
	int rows, cols;
public:
	d2DArray(int, int);
	~d2DArray();
	double*& operator[](int);
};

#endif
