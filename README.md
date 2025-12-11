# Matrices
<img src="Dimensions-for-Multiplying-Matrices.png" alt="Fibonacci Sequence" width="500"/> <br/>
## A c++ implementation of a matrix object that holds integers as well as matrix operations.
## 📌 What is a Matrix
A matrix is a rectangular array of items represented using columns and rows..<br/> 
### An example of a matrix is as follows: <br/>
 1 2 3 <br/>
 4 5 6 <br/>
 7 8 9 <br/>

## 🎇 Core Mechanism and Approach
For simplication, this implementation of matrices is mainly concerned with matrices of a size of 3x3.<br/>
The items being stored in the matrices are integers and are manually inputed into the matrix by the user. <br/>

## ✨ Class Methods and Key Features 
Each Matrix class/object has the following methods for the user to interact with: <br/>

*Matrix(int,int)*: A constructor to initialise the dimensions of the matrix as well as the 2d point to hold the items in the matric. <br/> <br/>
*Matrix(Matrix &)*: A copy constructor that makes a shallow copy of another matrix. <br/> <br/>
*~Matrix*: The destructor deallocates all memory used up by the object. <br/> <br/>
*insertVal(int,int,int)*: inserts a value into the matrix at the specified index. <br/> <br/>
*getRowNumber()* : Returns the number of rows in the matrix. <br/> <br/>
*getColumnNumber()* : Returns the number of columns in the matrix. <br/> <br/>
*getMatrix()* : Returns the 2D pointer array of the matrix.. <br/> <br/>
*operator+(Matrix &)const*:Overloads the addition operator so that we can add two matrices as follows: C = A + B <br/> <br/>
*operator-(Matrix &)const*:Overloads the subtraction operator so that we can subtract two matrices as follows: C = A - B <br/> <br/>
*operator*(Matrix &)const*:Overloads the multiplication operator so that we can multiply to matrices as follows: C = A * B <br/> <br/>
*calcIdentityMatrix()*: Returns the identity Matrix. <br/> <br/>
*transposeMatrix()*: Returns the transpose of a matrix<br/> <br/>
*calcDeterminant()*: Calculates the determinant of a matrix. <br/> <br/>
*DisplayMatrix()*:Displays the matrix\.<br/> <br/>
*isInvertible()*: Checks if the matrix is invertible. <br/> <br/>
*isTriangular()*: Checks if the matrix is triangular. <br/> <br/>
*LinearEquationRep*: Represents the Matrix as a system of linear equations.. <br/> <br/>


## 🔦 Known issues
The following features are still in progress: <br/>
*operator*(Matrix &)const*<br/> <br/>
*calcIdentityMatrix()*:<br/> <br/>
*transposeMatrix()*: <br/> <br/>
*calcDeterminant()*:<br/> <br/>
*DisplayMatrix()*:<br/> <br/>
*isInvertible()*: <br/> <br/>
*isTriangular()*: <br/> <br/>
*LinearEquationRep*: <br/> <br/>

     






