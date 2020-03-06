#ifndef BINTREE_H
#define BINTREE_H
#include <string>
#include <iostream>
#include <cstddef>

struct tree 
{
  tree(std::string s)
    : key(s), left(nullptr), right(nullptr) {}
  std::string key;
  tree * left, *right;
};


class BinTree
{
  public:
    BinTree(std::string s)
      : root(s) {}

    tree * get_root()
    {
      return &root;
    }

    tree * add_tree(tree * parent,std::string s)
    {
      tree * child = new tree(s);
      if (parent->left==nullptr) parent->left=child;
      else if (parent->right==nullptr) parent->right=child;
      else {
        std::cout << "Can't create child for " << parent->key << "\n";
        exit(1);
      }
      return child;
    }

    tree * FindInOrderTraversal(tree * n,std::string s)
    {
      tree * result;
      if (n==nullptr) return n; // we've reached a leaf
      std::cout << "FindInOrder Called for " << n->key << "\n";

      result=FindInOrderTraversal(n->left,s); // walk down the left

      if (result!=nullptr) return result; // if found walking left, return

      std::cout << "Checking: " << n->key << "\n"; // print progress
  
      if (n->key==s){     // CHECK FOR MATCH
        std::cout << "matched on " << s << "\n";
        return n;
      }

      result=FindInOrderTraversal(n->right,s); // walk down the right
      if (result!=nullptr) return result;
      return nullptr;
    }

    void InOrderTraversal(tree * n)
    {
      if (n==nullptr) return;
      InOrderTraversal(n->left); // walk down the left
      std::cout << n->key << "\n"; // print yourself
      InOrderTraversal(n->right); // walk down the right
    }

    void PreOrderTraversal(tree * n)
    {
      if (n==nullptr) return;
      std::cout << n->key << "\n"; // print yourself
      PreOrderTraversal(n->left); // walk down the left
      PreOrderTraversal(n->right); // walk down the right
    }

    void PostOrderTraversal(tree * n)
    {
      if (n==nullptr) return;
      PostOrderTraversal(n->left); // walk down the left
      PostOrderTraversal(n->right); // walk down the right
      std::cout << n->key << "\n"; // print yourself
    }
    
    void BFSPrint(tree *n)
    {
      if (n->left==nullptr) return;
      //std::cout << n->key << "\n";
      std::cout << n->left->key << "\n";
      if (n->right==nullptr) return;
      std::cout << n->right->key << "\n";
      BFSPrint(n->left);
      BFSPrint(n->left);
      //BFSPrint(n->right);
    }

  private:
    tree root;

};

#endif
