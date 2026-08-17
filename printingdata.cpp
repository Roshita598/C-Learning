#include <iostream>
int main(){
// std::cout : Printing data to the console
std::cout << " Hello Worls" << std::endl;
std::cout << "The number is" << 2801 << std::endl;
int age{25};
std::cout << "The age is" << age << std::endl;

// std::endl : It is used to print a new line
//std::cerr : Error message
std::cerr << "std::cerr output: Something went wrong" << std::endl;
//std::clog : Log message
std::clog << "std::clog output: This is a log message" << std::endl;
return 0;
}