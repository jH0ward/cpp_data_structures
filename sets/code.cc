#include <iostream>
#include "Set.h"

void PrintSet(Set S,int l)
{
  std::cout << "Parents:\n";
  std::cout << "[ ";
  for (int i=0;i<l;i++){
    std::cout << S.parent[i] << " ";
  }
  std::cout << "]\n";

  std::cout << "Rank:\n";
  std::cout << "[ ";
  for (int i=0;i<l;i++){
    std::cout << S.rank[i] << " ";
  }
  std::cout << "]\n";

}

int main()
{
  Set S = Set(6);
  PrintSet(S,6);

  S.Union(1,3);

  S.Union(4,1);

  S.Union(2,0);

  PrintSet(S,6);

  return 0;
}
