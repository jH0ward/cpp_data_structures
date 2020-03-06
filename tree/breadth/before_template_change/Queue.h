#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

template <class T>
struct node
{
  node(T k=-1)
    : key(k){}
  T key;
  node * next;
};

class Queue
{
  public:
    Queue()
      : head(nullptr), length(0) {}

    node<int> * NewNode(int key)
    {
      node <int> * new_node = new node<int>(key);
      return new_node;
    }

    void PushFront(int key)
    {
      node<int> * n = NewNode(key);
      n->next=head;
      head=n;
    }

    void Print()
    {
      node<int> * n = head;
      std::cout << "[ ";
      while (n!=nullptr){
        std::cout << n->key << " ";
        n=n->next;
      }
      std::cout << "]\n";
    }

  private:
    node<int> * head;
    int length;

};

#endif

