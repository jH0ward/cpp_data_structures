#include <iostream>
#include "Heap.h"

void PrintA(const double * A,const int s)
{
  std::cout << "[ ";
  for (int i=0;i<s;i++){
    std::cout << A[i] << " ";
  }
  std::cout << "]\n";

}


int main()
{

  double * A = new double[5];
  A[0]=1.0;
  A[1]=11.0;
  A[2]=-1.0;
  A[3]=56.0;
  A[4]=2.0;

  PrintA(A,5);

  //Heap<double> h = Heap<double>(A,5);

  //PrintA(A,5);

  Heap<double> h2 = Heap<double>(A,5,true);

  PrintA(A,5);


  return 0;
}
