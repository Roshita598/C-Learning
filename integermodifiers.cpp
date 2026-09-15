#include <iostream>
using namespace std;

int main(){
    signed int value1 {10};
    signed int value2 {-300};

    cout << "value1: " << value1 << endl;
    cout << "value2: " << value2 << endl;
    std::cout << "sizeof(value1): " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2): " << sizeof(value2) << std::endl;

    return 0;
}