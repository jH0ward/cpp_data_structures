#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

template <class T>
struct node
{
  node(T k=-1)
    : data(k), next(nullptr) {}
  T data;
  node * next;
};

template <class T>
class Queue
{
  public:
    Queue()
      : head(nullptr), tail(nullptr), length(0) {}

    node<T> * NewNode(T data)
    {
      node <T> * new_node = new node<T>(data);
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
      T k=head->data;

      if (head==tail){
        //std::cout << "Yeah, while popping head is equal to tail\n";
        //std::cout << "Head = " << head << " tail = " << tail << "\n";
        delete head;
        head=nullptr;
        tail=nullptr;
        //std::cout << "Head = " << head << " tail = " << tail << "\n";
        return k; 
      }

      head=tmp->next;
      delete tmp;
      return k;
    }

    T PopBack()
    {
      if (IsEmpty()) {
        std::cout << "Can't pop empty Q!\n";
        exit(-1);
      }
      T k = tail->data;

      if (head==tail){
        delete head;
        head=nullptr;
        tail=nullptr;
        return k; 
      }

      node<T> * n = head;
      while (n->next!=tail){
        n=n->next;
      }
      tail=n;
      delete n->next;
      n->next=nullptr;
      return k;
    }

    void PushFront(T data)
    {
      //std::cout << "Pushing in Q\n" << std::flush;
      node<T> * n = NewNode(data);
      if (tail==nullptr) tail=n;
      n->next=head;
      head=n;
      //std::cout << "End of pushfront, tail = " << tail << "\n";
    }

    void PushBack(T data)
    {
      //std::cout << "PUshin gback in Q\n";
      node<T> * n = NewNode(data);
      //std::cout << "After newnod\n";
      //std::cout << "head = " << head << "\n";
      if (head==nullptr){
        head=n;
        //std::cout << "Head was == nullptr, but now is ";
        //std::cout <<  head << "\n";
      }
      //std::cout << "Tail = " << tail << "\n";
      //std::cout << "Trying to set tail->next\n" << std::flush;
      if (tail!=nullptr){
        tail->next=n;
      }
      tail=n;
      //std::cout << "Tried to set tail->next\n" << std::flush;
      //tail=n;
      //std::cout << "Tail end of pushback = " << tail << "\n";
    }

    void Print()
    {
      node<T> * n = head;
      std::cout << "[ ";
      while (n!=nullptr){
        std::cout << n->data << " ";
        n=n->next;
      }
      std::cout << "]\n";
    }

  private:
    node<T> * head, *tail;
    int length;

};

#endif

