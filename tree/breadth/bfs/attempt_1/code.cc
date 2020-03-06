#include <iostream>
#include "Queue.h"
#include <string>

int main()
{
  Queue<std::string> q("Les");
  Queue<std::string> q2("Les");
  tree<std::string> * root=q.GetRoot();
  //std::cout << q.Pop() << "\n";
  //
  
  q.Push("Cathy",root);
  q.Push("Sam",root);


  //tree<std::string> node;
  while (!q2.Empty()){
    tree<std::string> * node=q2.Pop();
    std::cout << node->key << "\n";
    if (node->left!=nullptr){
      q2.Push(node->left->key,node->left);
    }
    if (node->right!=nullptr){
      q2.Push(node->right->key,node->right);
    }
  }

  return 0;
}
