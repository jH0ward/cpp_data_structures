#include <iostream>
#ifndef SLIST_H

struct node
{
  int key;
  node * next;

};

class SList
{
  public:
    SList()
    : head(NULL) {}
    void PushFront(int a){
      node * new_node = new node;
      new_node->key=a;
      new_node->next=head;
      head=new_node;
    }
    void PopFront(){
      if (is_empty()){
        std::cout << "List empty, nothing to pop\n";
        return;
      }
      node * tmp;
      tmp = head;
      head=tmp->next;
      delete tmp;
    }

    int TopFront(){
      return head->key;
    }
    void print_contents(){
      node * p = head;
      while (p!=NULL){
        std::cout << ", " << p->key ;
        p=p->next;
      }
      std::cout << "\n";
    }

    bool is_empty(){
      if (head==NULL){
        return true;
      }
      else return false;
    }

  private:
    node * head;


};

#define SLIST_H
#endif
