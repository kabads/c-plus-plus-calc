// 'Hello World!' program 
 
#include <iostream>
 
/*void query(){
  String doing;
  std::cin>>doing;

  }*/
// OK - I'm not sure what I'm doing here - I'm declaring doing, but the compiler is saying that it is not declared. I then tried creating a new void method, but that said the same. To me, this error is strange. 
int main(){
  String doing; //declaring this as an int works - why not string? 
  //query();
  std::cout << "Hello World!" << std::endl;
  std::cin >> doing;
  return 0;
}

