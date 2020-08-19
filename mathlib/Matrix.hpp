#ifndef Matrix_hpp
#define Matrix_hpp

#include <stdio.h>
#include <vector>
#include <array>

class Matrix {
public:
    //Matrix();
    
    void fillMatrix(std::vector<std::vector<double>> baseMatrix);
    void printMatrix();
    
    // Finds rows and colums of matrix
    auto findRows(std::vector<std::vector<double>> baseMatrix);
    auto findCols(std::vector<std::vector<double>> baseMatrix);
    
    // Returns double on the index given by user (Keep in mind it uses matrix notation for indicies and not array indicies)
    double getRes(int i, int j);
    
    // Returns multiplied matrix
    std::vector<std::vector<double>> mutliplication(Matrix matA, Matrix matB);
private:
    std::vector<std::vector<double>> baseMatrix;
};

#endif /* Matrix_hpp */
