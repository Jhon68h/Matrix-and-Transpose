#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
#include <random>
#include <vector>
using namespace std;

class Matrix{

  public:

    Matrix(int numRow, int numCol, bool isRandom);
    double getRandomNumber();

    void print();

    void setValue(int r, int c, double v){
     this->values.at(r).at(c) = v;
    };
        
    double getValue(int r, int c){
      return this->values.at(r).at(c);
    };

    Matrix *transpose();

  private:

    int numRow;    
    int numCol;
    vector<vector<double>> values;
};


#endif 
