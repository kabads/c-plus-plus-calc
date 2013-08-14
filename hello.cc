// 'Hello World!' program 
 
#include <iostream>
#include <string> 


int main(){
  //String doing; //declaring this as an int works - why not string? 
	//Matthew: in C++ all standard library classes use lowercase letters only
	//To declare it you would write 'string doing'
	//Also string is declared in its own header so you will need to include <string>
	//As well string in the std namespace so you will need to write std::string
	//If you get fed up of writing std:: add 'using namespace std;' just below your includes
		//(this tells the compiler to look in std:: if the name is not found without the std::
  
  // So, this means that String is an object and string is a variable? That's the way it works in Java. 


  std::int first;
  std::int second;
  std::string operator;
  std::int answer;
//std::cout << "Hello World!" << std::endl;
  std::cin << first;
  std::cin << operator;
  std::cin << second;
  if (operator == "+")
    answer = first + second;
  std::cout >> answer << std::endl;
  return 0;
}

