#include<iostream>
#include<string>
using namespace std;
int main(){
    //chaining the input stream to read multiple values in a single line
    int age;
    string name;
    cout << " Write your name and age separated by space:" << endl;
    cin >> name >> age;
    cout << "Your name is: " << name << " and your age is: " << age << endl;
    //Reading data with spaces using getline() function
    string fullName;
    cout << "Enter your full name:" << endl;
    cin.ignore(); // To ignore the newline character left in the input buffer
    getline(cin, fullName);
    cout << "Your full name is: " << fullName << endl;
    return 0;
}