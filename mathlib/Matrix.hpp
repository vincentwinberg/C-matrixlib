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
    
    // Returns double on the index given by user (Keep in mind it uses matrix notation for indicies and not array indicies)
    double getRes(int i, int j);
    
    // Returns multiplied matrix
    std::vector<std::vector<double>> mutliplication(Matrix &matA, Matrix &matB);
    void mutliplication(Matrix &matInput);
    
    // Returns gauss elimiated matrix
    void gaussElim();
    
private:
    std::vector<std::vector<double>> baseMatrix;
};

#endif /* Matrix_hpp */
