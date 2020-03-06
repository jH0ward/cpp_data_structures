#include <iostream>
#include <cstdlib>
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
    void PushFront(int a){ // Insert new node at beginning
      node * new_node = new node;
      new_node->key=a;
      new_node->next=head;
      head=new_node;
    }
    void InsertAfter(node * n,int new_key){
      node * new_node = new  node;
      new_node->next = n->next;
      new_node->key=new_key;
      n->next=new_node;
    }
    void PopFront(){ // Remove the first node
      if (is_empty()){
        std::cout << "List empty, nothing to pop\n";
        return;
      }
      node * tmp;
      tmp = head;
      head=tmp->next;
      delete tmp;
    }
    int TopFront(){ // Return first key
      return head->key;
    }
    void print_contents(){ // Print entire list
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

    bool find_key(int a){
      node * p = head;  
      while (p!=NULL){
        if (p->key==a) return true;
        p=p->next;
      }
      return false;
    }

    node * find_node(int a){
      node * p = head;
      try 
      {
        while (p!=NULL){
          if(p->key==a) return p;
          p=p->next;
        }
        throw a;
      }
      catch (int e)
      {
        std::cout << "Key value " << a << " not found!\n";
        std::exit(1);
      }
    }

  private:
    node * head;


};

#define SLIST_H
#endif
