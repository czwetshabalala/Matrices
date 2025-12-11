#ifndef MATRIX_H

using namespace std;
#define MATRIX_H
#include <string>

class Matrix{
private:
int r,c; //rows & columns of the matrix
int ** mat; // 2-Dimensional pointer for the array of the matrix

public:
Matrix(int,int);
Matrix(Matrix &);
Matrix(Matrix *);
~Matrix();
void insertVal(int,int,int);
int getRowNumber();
int getColumnNumber();
int ** getMatrix();
Matrix operator+(Matrix &) const;
Matrix operator-(Matrix &) const;
Matrix operator*(Matrix &) const;
int ** CalcIdentityMatrix();
int ** transposeMatrix();
int CalcDeterminant();
bool isTriangularMatrix();
bool isDiagonalMatrix();
bool isInvertible();
string LinearEquationRep();
string DisplayMatrix();

};
#endif