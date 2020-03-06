#ifndef SET_H
#define SET_H

#include <vector>

class Set
{
  public:
    Set(int size)
    {
      for (int i=0;i<size;i++){
        parent.push_back(i);
        rank.push_back(i);
      }
    }

    void MakeSet(int i)
    {
      parent[i]=i;
      rank[i]=0;
    }

    int Find(int i)
    {
      while (i!=parent[i]){
        i=parent[i];
      }
      return i;
    }

    void Union(int i,int j)
    {
      int i_id=Find(i);
      int j_id=Find(j);

      if (i_id==j_id){
        return;
      }
      // Add the shorter tree to the taller tree
      if (rank[i_id]>rank[j_id]){
        parent[j_id]=i_id;
      }
      else {
        parent[i_id]=j_id;
        // rank of tree only grows if they were same height
        if (rank[i_id]==rank[j_id]){
          rank[j_id]+=1;
        }
      }
    }

    std::vector<int> parent;
    std::vector<int> rank;

  private:
    int max_size;

};

#endif
