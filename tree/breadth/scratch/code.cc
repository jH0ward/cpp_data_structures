#include <iostream>

int main()
{
  //int *a, *b, *c;
  //int *d;
  
  //int a = new int;
  int * head;

  int * a = new int;
  *a=1;
  head=a;

  int *c  = new int;
  *c=2;

  int * b = new int;
  b=head;

  head=c;


  //d=a;
  //a=d;

  //std::cout << "d = " << *d << "\n";
  std::cout << "a = " << *a << "\n";
  std::cout << "b = " << *b << "\n";
  std::cout << "c = " << *c << "\n";
  std::cout << "head = " << *head << "\n";

}
