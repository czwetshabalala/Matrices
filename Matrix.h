#ifndef MATRIX_H

using namespace std;
#define MATRIX_H
#include <string>

class Matrix{
private:
int r,c; //indexes of the matrix
int ** mat; // 2-Dimensional pointer for the array of the matrix

public:
Matrix();
Matrix(int**);
~Matrix();
int ** Add(int**);
int ** Subtract(int**);
int ** Multiply(int**);
int ** Invert();
int CalcDeterminant();
bool isTriangularMatrix();
bool isDiagonalMatrix();
bool isInvertible();
string LinearEquationRep();

};
#endif