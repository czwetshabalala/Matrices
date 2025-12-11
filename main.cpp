#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Matrix.cpp"
using namespace std;

int main() {
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Basic Test: 2x2 Matrix "<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    Matrix test1(2,2);
    test1.insertVal(0,0,1);
    test1.insertVal(0,1,2);
    test1.insertVal(1,0,3);
    test1.insertVal(1,1,4);
    cout<<test1.DisplayMatrix()<<endl;
    cout<<"The Matrix has " + to_string(test1.getRowNumber()) + " rows and " + to_string(test1.getColumnNumber()) + " columns"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Proper Test 1: 3x3 Matrix"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    Matrix test2(3,3);
    srand(time(0));
    for(int i =0; i<test2.getRowNumber();i++){
        for(int j=0; j< test2.getColumnNumber();j++){
            test2.insertVal(i,j, rand() % 10);
        }
    }
    cout<<test2.DisplayMatrix()<<endl;
    cout<<"The Matrix A has " + to_string(test2.getRowNumber()) + " rows and " + to_string(test2.getColumnNumber()) + " columns"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;

    cout<<"Proper Test 2: 3x3 Matrix"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    Matrix test3(3,3);
    srand(time(0));
    for(int i =0; i<test3.getRowNumber();i++){
        for(int j=0; j< test3.getColumnNumber();j++){
            test3.insertVal(i,j, rand() % 11);
        }
    }
    cout<<test3.DisplayMatrix()<<endl;
    cout<<"The Matrix B has " + to_string(test3.getRowNumber()) + " rows and " + to_string(test3.getColumnNumber()) + " columns"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Matrix Operations Test: "<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Addition:"<<endl;
    cout<<endl;
    Matrix sumMatrix(3,3);
    sumMatrix = test2 + test3;
    cout<<sumMatrix.DisplayMatrix()<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Subtraction:"<<endl;
    cout<<endl;
    Matrix difMatrix(3,3);
    sumMatrix = test2 - test3;
    cout<<sumMatrix.DisplayMatrix()<<endl;
    cout<<"-------------------------------------------------------------------"<<endl; 
    return 0;
}

