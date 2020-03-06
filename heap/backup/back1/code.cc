#include <iostream>
#include "Heap.h"


int main()
{
  int M=100;
  Heap<int> h = Heap<int>(M);
  std::cout << "ADDING 4\n";
  h.Insert(4);

  std::cout << "ADDING 1\n";
  h.Insert(1);
  std::cout << "ADDING 2\n";
  h.Insert(2);
  h.Print();

  std::cout << "ADDING 3\n";
  h.Insert(3);
  h.Print();
  std::cout << "ADDING 6\n";
  h.Insert(6);

  h.Print();


  return 0;
}
