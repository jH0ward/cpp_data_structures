#include "List.h"

void List::PrintContents()
{
  node * p=head;
  std::cout << "[";
  while (p!=NULL){
    std::cout << p->key << "  ";
    p=p->next;
  }
  std::cout << "]\n";
}
void List::PushFront(int a)
{
  node * new_node = new node;
  new_node->key=a;
  new_node->next=head;
  head=new_node;
  if (tail==NULL) tail=new_node;
}
void List::PushBack(int a)
{
  node * new_node = new node;
  new_node->key = a;
  new_node->next=NULL;
  tail->next=new_node;
  tail=new_node;
}

