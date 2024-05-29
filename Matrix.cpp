#include "include/matrix.hpp"
#include <vector>
#include <random>

double Matrix::getRandomNumber(){
  
  std::random_device device;
  std::mt19937 gen(device());
  std::uniform_real_distribution<double> dis(0, 1);

  return dis(gen);

}
////////////////////////////////////////
void Matrix::print(){
  for(int i = 0; i < numRow; i++){
    for(int j = 0; j < numCol; j++){
      cout << this->values.at(i).at(j) << "\t\t";
    }
    cout << endl;
  }
}

//////////////////////////////////////

Matrix::Matrix(int numRow, int numCol, bool isRandom){
  this-> numCol = numCol;
  this-> numRow = numRow;
  
  for(int i = 0; i < numRow; i++){
    vector<double> colValues;
    for(int j = 0; j < numCol; j++){
      float r = 0.0;
      if(isRandom){
        r = this->getRandomNumber();
      }
    colValues.push_back(r);
    }
  values.push_back(colValues);
  }
}

////////////////////////////////////////


Matrix *Matrix::transpose(){

  Matrix *m = new Matrix(this-> numCol, this-> numRow, false);

  for(int i = 0; i < numRow; i++){
    for(int j = 0; j < numCol; j++){
      m-> setValue(j, i, this->getValue(i, j));
    }
  }
  return m;
}





