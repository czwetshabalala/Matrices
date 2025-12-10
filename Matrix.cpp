#include <iostream>
#include "Matrix.h"
#include <string>

//Base constructor
Matrix::Matrix(int row,int col){
    //initialise values for the column and rows
    r = row;
    c = col;

    //initialise the 2D pointer
    mat = new int * [r];
    for(int i =0; i<r;i++){
        mat[i] = new int [c];
    }
}

//Copy constructor (Shallow Copy)
Matrix::Matrix(Matrix & matr){
    mat = matr.mat;
    r = matr.getRowNumber();
    c = matr.getColumnNumber();
}

int Matrix::getRowNumber(){
    return r;
}

int Matrix::getColumnNumber(){
    return c;
}
int ** Matrix::getMatrix(){
    return mat;
}
//Copy constructor(Deep copy)
Matrix::Matrix(Matrix * matr){
    r = matr->getRowNumber();
    c = matr->getColumnNumber();

    mat = new int * [r];
    for(int i=0;i<r;i++){
        mat[i] = new int[c];
    }


    for(int i=0; i < r; i++){
        for(int j = 0; j < c;j++){
            mat[i][j] = matr->mat[i][j];
        }
    }
}

Matrix Matrix::operator+(Matrix & other)const{
    //We can only add matrices with the same dimensions
    if(r==other.getRowNumber()&& c== other.getColumnNumber()){
        Matrix tempMatrix(r,c);
        for(int i=0; i<r;i++){
            for(int j=0;j<c;j++){
                mat[i][j] += other.getMatrix()[i][j];
            }
        }
        tempMatrix.mat = mat;
        return tempMatrix;
    }
    return nullptr;
}

Matrix Matrix::operator*(Matrix & other)const{
    //PreCondition: Matrix multiplication can only happen if the first matrix's column number is the same is the second matrix's row number
    if(c==other.getRowNumber()){
        Matrix prodMatrix(c,other.getRowNumber());
        for(int i = 0; i <c;i++){
            for(int j=0;j<other.getRowNumber();j++){
                
            }
        }
    }
    
    return nullptr;
}




