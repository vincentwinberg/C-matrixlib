# C-matrixlib
Basic maths library created in C++

## Current features
Create a matrix object
```c++
Matrix myMatrix;
```
Print matrix

```c++
myMatrix.printMatrix();
```

Example of filling the matrix with a 2x2 matrix
```c++
std::vector<std::vector<double>> myValues = { {1, 2}, {3, 4} };

myMatrix.fillMatrix(myValues);
```

Example 1 of matrix multiplication
```c++
// Two filled matricies
Matrix matrixOne;
Matrix matrixTwo;

// Create empty matrix
Matrix matrixThree;

// Performs multiplication and assigns to new object
matrixThree.fillMatrix(matrixOne.mutliplication(matrixOne, matrixTwo));

```

Example 2 of matrix multiplication (void return)
```c++
// Two filled matricies
Matrix matrixOne;
Matrix matrixTwo;

matrixOne.mutliplication(matrixTwo));
```

