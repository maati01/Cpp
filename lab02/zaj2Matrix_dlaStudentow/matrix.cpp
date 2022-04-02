#include <iostream>
#include <string>

using namespace std;

#include "matrix.h"

TwoDimensionMatrix::TwoDimensionMatrix(): matrix(){
}

TwoDimensionMatrix::TwoDimensionMatrix(const TwoDimensionMatrix &matrix):  matrix() {
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            this->matrix[i][j] = matrix.get(i,j);
        }
    }
}

TwoDimensionMatrix::TwoDimensionMatrix(const MatrixElement matrix[size][size]): matrix() {
    std::copy(&matrix[0][0], &matrix[0][0]+size*size,&this->matrix[0][0]);
}

MatrixElement *TwoDimensionMatrix::operator[](int i) {
    return matrix[i];
}

const MatrixElement *TwoDimensionMatrix::operator[](int i) const{
    return matrix[i];
}

ostream &operator<<(ostream &os, const TwoDimensionMatrix &matrix) {
    for(int i=0;i<matrix.getSize();i++){
        for(int j=0;j<matrix.getSize();j++){
            os << matrix.get(i,j) << endl;
        }
    }
    return os;
}

istream &operator>>(istream  &is, const TwoDimensionMatrix &matrix) {
    is >> (size_t &) matrix[0][0]  >> (size_t &) matrix[0][1] >> (size_t &) matrix[1][0] >>  (size_t &) matrix[1][1];

    return is;
}

TwoDimensionMatrix &TwoDimensionMatrix::operator*=(MatrixElement number) {
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            this->matrix[i][j] *= number;
        }
    }
    return *this;
}

TwoDimensionMatrix TwoDimensionMatrix::operator&&(const TwoDimensionMatrix &matrix) const {
    MatrixElement temp[2][2];
    for(int i=0;i< matrix.getSize();i++){
        for(int j=0;j<matrix.getSize();j++){
            temp[i][j] = this->matrix[i][j] && matrix[i][j];
        }
    }
    TwoDimensionMatrix tmp(temp);
    return tmp;
}

TwoDimensionMatrix operator+(const TwoDimensionMatrix& matrix1, const TwoDimensionMatrix& matrix2) {
    MatrixElement matrix[2][2];
    for(int i=0;i< matrix1.getSize();i++){
        for(int j=0;j<matrix1.getSize();j++){
            matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    TwoDimensionMatrix tmp(matrix);
    return tmp;
}

void TwoDimensionMatrix::operator()(TwoDimensionMatrix& matrix)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            (*this)[i][j] = matrix[i][j];
}

#ifndef _MSC_FULL_VER // if not Visual Studio Compiler
    #warning "Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym"
#else
    #pragma message ("Klasa jest do zaimplementowania. Instrukcja w pliku naglowkowym")
#endif
