#ifndef HEAP_H
#define HEAP_H
#include <cstdlib>
#include <iostream>

#define parent(i) ((i-1)/2)
#define lchild(i) (2*i+1)
#define rchild(i) (2*i+2)


template <class T>
class Heap
{
  public:
    Heap(int max_size)
      : max_size(max_size),size(0)
    {
      ary = new int [max_size]; 
    }

    ~Heap()
    {
      delete [] ary;
    }

    void Insert(T val)
    {
      ary[size]=val;
      SiftUp(size);
      size+=1;
    }

    void SiftUp(int i)
    {
      while (ary[parent(i)]<ary[i]){
        T tmp = ary[i];
        ary[i]=ary[parent(i)];
        ary[parent(i)]=tmp;
        i=parent(i);
      }
    }

    void SiftDown(int i)
    {
      int max_i=i;

      if ((lchild(i)<size) && (ary[lchild(i)]>ary[max_i])){
        max_i=lchild(i);
      }

      if ((rchild(i)<size) && (ary[rchild(i)]>ary[max_i])){
        max_i=rchild(i);
      }

      if (i!=max_i){
        T tmp = ary[i];
        ary[i]=ary[max_i];
        ary[max_i]=tmp;
        SiftDown(max_i);
      }

    }
    void Print()
    {
      std::cout << "[";
      for (size_t i=0;i<size;i++){
        std::cout << " " << ary[i];
      }
      std::cout << " ]\n";
    }

    T GetMax()
    {
      return ary[0]; 
    }

    T ExtractMax()
    {
      T m = ary[0];
      ary[0]=ary[size];
      size-=1;
      SiftDown(0);
      return m;
    }

    int GetSize()
    {
      return size;
    }

  private:
    int max_size;
    int size;
    T * ary;

};


#endif

