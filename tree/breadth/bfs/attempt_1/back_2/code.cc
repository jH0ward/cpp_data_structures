#include <iostream>
#include "Queue.h"
#include <string>

int main()
{
  Queue<std::string> q("Les");
  tree<std::string> * root=q.GetRoot();
  tree<std::string> * cathy=q.Push("Cathy",root);
  tree<std::string> * sam=q.Push("Sam",root);
  //tree<std::string> * frank=q.Push("Frank",root);
  q.Push("Frank",cathy);
  q.Push("Alex",cathy);
  q.Push("Nancy",sam);
  q.Push("Violet",sam);


  q.PrintInOrder(root);

  std::cout << "\nPopping of people...\n";
  //std::cout << q.Pop() << "\n";
  //std::cout << q.Pop() << "\n";
  //std::cout << q.Pop() << "\n";
  //std::cout << q.Pop() << "\n";
  //q.PrintInOrder(cathy);

  return 0;
}
