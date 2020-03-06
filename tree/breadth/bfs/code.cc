#include <iostream>
#include "Queue.h"
#include "BinTree.h"
#include <string>

int main()
{
  BinTree * my_tree = new BinTree("Les");
  tree * root = my_tree->get_root();

  tree * cathy = my_tree->add_tree(root,"Cathy");
  tree * sam = my_tree->add_tree(root,"Sam");

  my_tree->add_tree(cathy,"Alex");
  my_tree->add_tree(cathy,"Frank");

  my_tree->add_tree(sam,"Nancy");
  my_tree->add_tree(sam,"Violet");

  my_tree->InOrderTraversal(root);

  // Now have 3 levels of trees
  std::cout << "\nBeginning BFS search\n";
  Queue<tree*> * q = new Queue<tree*>;
  q->PushFront(root);
  tree * res;
  while (!q->IsEmpty()){
    res=q->PopFront();    
    std::cout << res->key << "\n";
    if (res->left != nullptr){
      std::cout << "Pushing on left \n";
      std::cout << "Left ptr is " << res->left->key << "\n";
      q->PushBack(res->left);
      std::cout << "After push\n" << std::flush;
    }
    if (res->right != nullptr){
      std::cout << "Pushing on right\n";
      q->PushBack(res->right);
    }
    else {
      std::cout << "That one has no children\n";
    }
  }
  

  return 0;
}
