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
  // The std::string is a 'user defined type', or an object (Note: In C++ all objects behave as variables, unless made constants)
    // int is a variable. std::string is also a variable (Note: 'String' does not exist).
    // the Java concept of objects being different from variables does NOT apply in C++, they are the same,
        //also int has the same rights (i.e. a string could behave as an int)
            // as std::string, just std::string is not built into the compiler.
        // it's the same with std::complex (complex number), you use it like an int (all mathematical operators apply)
        // however std::complex is a type in its own right and int!=complex, and it also lets you access the real and imaginary parts.
        // It is what I said yesterday about built in types having equal rights and abilities to user/library defined types
        // Ask if the above doesn't make sense.


  int first;
  int second;
  std::string operation;
  int answer;
//std::cout << "Hello World!" << std::endl;
  std::cin >> first;
  std::cin >> operation;
  std::cin >> second;
  if (operation == "+")
    answer = first + second;
  if (operation == "-")
    answer = first - second;
  if (operation == "*")
    answer = first * second;
  if (operation == "/")
    answer = first / second;
  std::cout << answer << std::endl; //how about using '\n' instead of std::endl
  return 0;
}

