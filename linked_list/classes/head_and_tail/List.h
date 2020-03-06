#include <iostream>
#ifndef LIST_H
#define LIST_H


struct node
{
  int key;
  node * next;
};

class List
{
  public:
    List()
      : head(NULL),tail(NULL)
    {}

    void PrintContents();
    void PushFront(int);
    void PushBack(int);

  private:
    node * head, * tail;

};


#endif
