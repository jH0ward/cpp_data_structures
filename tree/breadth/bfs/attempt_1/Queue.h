#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include <cstdlib>

template <class T>
struct tree
{
  tree(T k=-1)
    : key(k), left(nullptr), right(nullptr) {}
  T key;
  tree * left;
  tree * right;
};

template <class T>
class Queue
{
  public:
    Queue(T r)
      : root(new tree<T>(r)), head(root) {}
    
    tree<T> * GetRoot()
    {
      return root;
    }

    tree<T> * Push(T key,tree<T> * node)
    {
      tree<T> * new_tree = new tree<T>(key);
      if (node->left==nullptr) node->left=new_tree;
      else if (node->right==nullptr) node->right=new_tree;
      else {
        std::cout << "Can't create child\n";
        exit(-1);
      }
      //head=new_tree;
      return new_tree;
    }

    tree<T> * Pop()
    {
      T k;
      tree<T> * tmp = head;
      k=head->key; 
      //std::cout << "head key = " << head->key << "\n";
      if (head->left!=nullptr){
        //std::cout << "Moving head to the left\n";
        head=head->left;
      }
      else if (head->right!=nullptr){
       // std::cout << "Moving head to the right\n";
       head=head->right;
      }
      else {
        //std::cout << "Couldn't find location to move head\n";
        //exit(-1);
        head=nullptr;
      }
      //delete tmp;
      return tmp;
    }
    
    bool Empty()
    {
      if (head==nullptr)
      {
        return true;
      }
      return false;
    }

    void PrintInOrder(tree<T> * t)
    {
      //std::cout << "Current head = " << head->key  << "\n";
      //std::cout << "Current Key = " << t->key << "\n" << std::flush;
      //std::cout << "Key left = " << t->left << "\n" << std::flush;
      if (t==nullptr) return;
      PrintInOrder(t->left);
      std::cout << t->key << "\n";
      PrintInOrder(t->right);
    }

  private:
    tree<T> * root;
    tree<T> * head;

};

#endif

