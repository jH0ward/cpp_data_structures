#include <iostream>
#include "SList.h"

int main()
{
  SList my_list; // Create singly-linked list
  int first = 1; 
  my_list.PushFront(first); // push 1 onto the front

  my_list.print_contents();
  //std::cout << my_list.TopFront() << "\n"; // return front

  my_list.PushFront(99);
  my_list.print_contents();
  //std::cout << my_list.TopFront() << "\n";

  my_list.PopFront();
  my_list.print_contents();

  my_list.PopFront();
  my_list.print_contents();

  my_list.PopFront();
  //my_list.PopFront();
  //my_list.print_contents();
  //std::cout << my_list.TopFront() << "\n";


  return 0;
}

