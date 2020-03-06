#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <cstdlib>

template <class T>
struct node
{
  node(T k=-1)
    : key(k), next(nullptr) {}
  T key;
  node * next;
};

template <class T>
class Queue
{
  public:
    Queue()
      : head(nullptr), tail(nullptr), length(0) {}

    node<T> * NewNode(T key)
    {
      node <T> * new_node = new node<T>(key);
      return new_node;
    }

    bool IsEmpty()
    {
      if (head==nullptr) return true;
      return false;
    }

    T PopFront()
    {
      if (IsEmpty()) {
        std::cout << "Can't pop empty Q!\n";
        exit(-1);
      }

      node<T> * tmp=head;
      T k=head->key;

      if (head==tail){
        delete head;
        head=nullptr;
        tail=nullptr;
        return k; 
      }

      head=tmp->next;
      delete tmp;
      return k;
    }

    void PushFront(T key)
    {
      node<T> * n = NewNode(key);
      if (tail==nullptr) tail=n;
      n->next=head;
      head=n;
    }

    void Print()
    {
      node<T> * n = head;
      std::cout << "[ ";
      while (n!=nullptr){
        std::cout << n->key << " ";
        n=n->next;
      }
      std::cout << "]\n";
    }

  private:
    node<T> * head, *tail;
    int length;

};

#endif

