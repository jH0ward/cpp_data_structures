#include <iostream>
#include "List.h"

int main()
{
  List my_list;
  my_list.PushFront(42);
  my_list.PrintContents(); 
  my_list.PushBack(69);
  my_list.PrintContents(); 
  my_list.PushFront(1);
  my_list.PushBack(2);
  my_list.PrintContents();
}



