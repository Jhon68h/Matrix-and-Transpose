#include "../include/matrix.hpp"


int main(int argc, char **argv){
  
  Matrix *m = new Matrix(3, 2, true);

  m->print();
  cout << "\n";
  cout << "-----------------------------" << endl;
  cout << "\n";

  Matrix *mT = m->transpose();

  mT -> print();
  

  return 0;
}
