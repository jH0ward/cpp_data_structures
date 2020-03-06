#include <iostream>
#include "SList.h"

int main()
{
  SList my_list;
  for (int i=0;i<=10;i++){
    my_list.PushFront(i*i);
  }

  my_list.print_contents();
  std::cout << "\n";

  node * loc81=my_list.find_node(81);
  //std::cout << loc81.key;
  //std::cout << loc81.next->key;

  my_list.InsertAfter(loc81,84);
  my_list.print_contents();


}
