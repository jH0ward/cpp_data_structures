#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::cout;
using std::endl;

int phoneStr2Int(string str_num)
{
  int num;
  std::size_t found=-1;
  found=str_num.find("-");
  while(found!=string::npos){
    str_num.erase(found,1);
    found=str_num.find("-");
  }
  std::stringstream ss(str_num);
  ss >> num;
  return num;
}

int main()
{
  string str_number="123-45-67";  
  int num=phoneStr2Int(str_number);
  cout << num << endl;
  // H_p = { h_p ^ {a,b} (x) = ( (ax+b) mod p) mod m}
  //   a,b: 1 <= a <= p-1  ; 0 <= b <= p-1

  return 0;
}
