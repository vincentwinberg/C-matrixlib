# C-matrixlib
Basic maths library created in C++

## Current features
Create a matrix object
```c++
Matrix myMatrix;
```
Example of filling the matrix with a 2x2 matrix
```c++
std::vector<std::vector<double>> A = { {1, 2}, {3, 4}};

myMatrix.fillMatrix(A);
```
