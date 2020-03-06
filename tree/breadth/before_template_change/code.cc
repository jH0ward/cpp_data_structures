#include <iostream>
#include "Queue.h"

int main()
{
  Queue q;
  q.PushFront(14);
  q.PushFront(1);
  q.PushFront(99);
  q.Print();

  return 0;
}
