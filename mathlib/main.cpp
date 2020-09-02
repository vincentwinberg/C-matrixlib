#include <iostream>
#include "Matrix.hpp"
#include <vector>

int main() {
    Matrix myMat;
    Matrix myMat2;
    Matrix C;
    
    std::vector<std::vector<double>> A = { {1,4}, {1,2} };
    std::vector<std::vector<double>> B = { {1,2}, {1,5} };
    
    myMat.fillMatrix(A);
    myMat2.fillMatrix(B);
    
    std::cout << "Matrix 1 before multiplication:\n";
    myMat.printMatrix();
    std::cout << "Matrix 2 before multiplication:\n";
    myMat2.printMatrix();
    
    std::cout << "Result:\n";
    
    C.fillMatrix(myMat.mutliplication(myMat, myMat2));
    C.printMatrix();
    
    std::cout << C.getRes(1, 2) << std::endl;
    
    C.gaussElim(C);
    C.printMatrix();
    
    return 0;
}
