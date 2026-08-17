#include <iostream>
using namespace std;

int addnumbers(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    int first_number{35};
    int second_number{25};
    cout << "The first number is:" << first_number << endl;
    cout << "The second number is:" << second_number << endl;
    int sum = first_number + second_number;
    cout << "The sum is:" << sum << endl;
    cout << "The sum is: " << addnumbers(first_number, second_number) << endl;
    int result = addnumbers(100, 90);
    cout << "The sum is: " << result << endl;
    cout << "The sum is: " << addnumbers(100, 150) << endl;
    return 0;
}