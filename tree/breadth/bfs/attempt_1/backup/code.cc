#include <iostream>
#include "Queue.h"
#include <string>

int main()
{
  Queue<std::string> q;
  q.PushBack("Les");
  node<std::string> tmp;
  while (!q.IsEmpty()){
    tmp=q.PopFront();
    std::cout << tmp << "\n";
    //if (
  }
  

  return 0;
}
