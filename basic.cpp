#include<iostream>
using namespace std;

int main(){
    int first_number{12};
    int second_number{8};

    cout<< "The first number is: " << first_number << endl;
    cout<< "The second number is: " << second_number << endl;

    int sum = first_number + second_number;
    cout << "The sum of the two numbers is: " << sum << endl;
    return 0;
}