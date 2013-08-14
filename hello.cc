// 'Hello World!' program 
 
#include <iostream>
#include <string> 
/*void query(){
  String doing;
  std::cin>>doing;

  }*/
// OK - I'm not sure what I'm doing here - I'm declaring doing, but the compiler is saying that it is not declared. I then tried creating a new void method, but that said the same. To me, this error is strange. 
int main(){
  //String doing; //declaring this as an int works - why not string? 
	//Matthew: in C++ all standard library classes use lowercase letters only
	//To declare it you would write 'string doing'
	//Also string is declared in its own header so you will need to include <string>
	//As well string in the std namespace so you will need to write std::string
	//If you get fed up of writing std:: add 'using namespace std;' just below your includes
		//(this tells the compiler to look in std:: if the name is not found without the std::
  
  // So, this means that String is an object and string is a variable? That's the way it works in Java. 

  //query();
  std::string doing;
  std::cout << "Hello World!" << std::endl;
  std::cin >> doing;
  std::cout << doing << std::endl;
  return 0;
}

