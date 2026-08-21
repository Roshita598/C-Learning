#include <iostream>
using namespace std;

int main() {
    //variable may contain a random garbage value. WARNING
    int elephant_count; //declaration of variable
    int lion_count{}; //declaration of variable with initialization
    int dog_count{10}; //declaration of variable with initialization to 10
    int cat_count = 15; //declaration of variable with initialization to 15

    //can use expression as initialization
    int domestic_animal_count = {dog_count + cat_count}; //declaration of variable with initialization to the sum of dog_count and cat_count

    //Won't compile because the variable does not exist
    //int bad_initialization = {doesnotexist + doesnotexist2}; //declaration of variable with initialization to the sum of two non-existent variables. This will cause a compilation error.

    //2.9 is a type double, so it will be truncated to 2 when assigned to an int variable
    int narrowing_conversion = static_cast<int>(2.9); //declaration of variable with initialization to 2.9, which will be truncated to 2
    
    //print the values of the variables
    cout << "elephant_count: " << elephant_count << endl; //may print a random garbage value
    cout << "lion_count: " << lion_count << endl; //will print 0
    cout << "dog_count: " << dog_count << endl; //will print 10
    cout << "cat_count: " << cat_count << endl; //will print 15
    cout << "domestic_animal_count: " << domestic_animal_count << endl; //will print 25
    cout << "narrowing_conversion: " << narrowing_conversion << endl; //will print 2
    //cout << "bad_initialization: " << bad_initialization << endl; //will not compile

    return 0;
}