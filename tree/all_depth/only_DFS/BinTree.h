#ifndef BINTREE_H
#define BINTREE_H
#include <string>
#include <iostream>
#include <cstddef>

struct node 
{
  node(std::string s)
    : key(s), left(nullptr), right(nullptr) {}
  std::string key;
  node * left, *right;
};


class BinTree
{
  public:
    BinTree(std::string s)
      : root(s) {}

    node * get_root()
    {
      return &root;
    }

    node * add_node(node * parent,std::string s)
    {
      node * child = new node(s);
      if (parent->left==nullptr) parent->left=child;
      else if (parent->right==nullptr) parent->right=child;
      else {
        std::cout << "Can't create child for " << parent->key << "\n";
        exit(1);
      }
      return child;
    }

    node * FindInOrderTraversal(node * n,std::string s)
    {
      node * result;
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

    void InOrderTraversal(node * n)
    {
      if (n==nullptr) return;
      InOrderTraversal(n->left); // walk down the left
      std::cout << n->key << "\n"; // print yourself
      InOrderTraversal(n->right); // walk down the right
    }

    void PreOrderTraversal(node * n)
    {
      if (n==nullptr) return;
      std::cout << n->key << "\n"; // print yourself
      PreOrderTraversal(n->left); // walk down the left
      PreOrderTraversal(n->right); // walk down the right
    }

    void PostOrderTraversal(node * n)
    {
      if (n==nullptr) return;
      PostOrderTraversal(n->left); // walk down the left
      PostOrderTraversal(n->right); // walk down the right
      std::cout << n->key << "\n"; // print yourself
    }

  private:
    node root;

};

#endif
