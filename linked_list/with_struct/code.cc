#include <iostream>

struct node {
  int key;
  node * next;

};

int main()
{
  node * head;
  node * tail;

  node a;
  a.key=2;
  head=&a;
  
  node b;
  b.key=4;
  b.next=NULL;
  a.next=&b;
  tail=&b;

  std::cout << "Head points to " << head->key <<"\n";
  std::cout << "--> " << head->next->key << "\n";
  std::cout << "Tail points to " << tail->key << "\n";
}
