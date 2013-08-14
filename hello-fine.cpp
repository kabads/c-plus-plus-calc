//mthinkcpp
// 'Hello World!' program 
 
#include <iostream>
#include <string>
 
int main(){
  std::cout << "Hello World!\n";// << std::endl;
  std::string doing;
  std::cin >> doing;
  std::cout<<doing<<'\n'; //use '\n' instead of std::endl unless you need to explicitly flush the print buffer (in all my programmes I've never needed to use std::endl)
  return 0;
}
