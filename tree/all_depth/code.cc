#include <iostream>
#include "BinTree.h"

int main()
{
  // Level 1
  BinTree tree("Les");
  node * root=tree.get_root();
  // Level 2
  node * cathy=tree.add_node(root,"Cathy");
  node * sam=tree.add_node(root,"Sam");
  // Level 3
  node * alex=tree.add_node(cathy,"Alex");
  node * frank=tree.add_node(cathy,"Frank");

  node * nancy=tree.add_node(sam,"Nancy");
  node * violet=tree.add_node(sam,"Violet");

  // Level 4
  node * tony = tree.add_node(violet,"Tony");
  node * wendy = tree.add_node(violet,"Wendy");

  tree.BFSPrint(root);

  return 0;
}
