#include <iostream>
#include <string>
#include "Queue.h"

int main()
{
  Queue<std::string> q;
  q.PushFront("Alpha");
  q.PushBack("Bravo");
  q.PushBack("Charlie");
  q.PushBack("End");
  q.Print();

  std::cout << q.PopFront() << "\n";
  q.Print();
  std::cout << q.PopFront() << "\n";
  q.Print();

  std::cout << q.PopFront() << "\n";
  //std::cout << q.PopBack() << "\n";
  q.Print();
  std::cout << q.PopBack() << "\n";
  std::cout << q.PopBack() << "\n";
  std::cout << q.PopBack() << "\n";
  

  q.Print();

  return 0;
}
