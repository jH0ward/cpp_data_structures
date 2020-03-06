#include <iostream>
#include "Heap.h"


int main()
{
  int M=100;
  Heap<int> h = Heap<int>(M);
  h.Insert(42);
  h.Insert(29);
  h.Insert(18);

  h.Insert(14);
  h.Insert(7);
  h.Insert(18);
  h.Insert(12);

  h.Insert(11);
  h.Insert(13);
  
  h.Print();

  std::cout << "Max: " << h.ExtractMax() << "\n";



  h.Print();

  return 0;
}
