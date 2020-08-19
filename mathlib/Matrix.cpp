#include "Matrix.hpp"
#include <iostream>

void Matrix::fillMatrix(std::vector<std::vector<double>> baseMatrix) {
    this -> baseMatrix = baseMatrix;
}

void Matrix::printMatrix() {
    for (int i = 0; i < baseMatrix.size(); i++)
    {
        for (int j = 0; j < baseMatrix[i].size(); j++)
        {
            std::cout << baseMatrix[i][j] << " ";;
        }
        std::cout << "\n";
    }
}

double Matrix::getRes(int i, int j) {
    return baseMatrix[i-1][j-1];
}

std::vector<std::vector<double>> Matrix::mutliplication(Matrix &matA, Matrix &matB) {
    
    // matA: F^{n \times m}, matB: F^{m \times p}, where F denotes field

    // Fins row of first matrix
    auto A_Rows { matA.baseMatrix.size() };
    auto B_Rows { matB.baseMatrix.size() };
    
    // Finds columns of input matricies
    auto B_Cols { matB.baseMatrix[0].size() };
    
    // Fills the matrix with zeroes, throws memory error if not pre-allocated
    std::vector<std::vector<double>> matC {A_Rows, std::vector<double> (B_Cols, 0.0)};
    
    // Calculates the result for all indicies in the matrix
    for (int i = 0; i < A_Rows; i++) {
        for (int j = 0; j < B_Cols; j++) {
            double sum = 0;
            for (int k = 0; k < B_Rows; k++) {
                sum += matA.baseMatrix[i][k]*matB.baseMatrix[k][j];
            }
            matC[i][j] = sum;
        }
    }
    
    return matC;
}
