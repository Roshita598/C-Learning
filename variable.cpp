#include <iostream>
using namespace std;

int main() {
    //variable may contain a random garbage value. WARNING
    int elephant_count; //declaration of variable
    int lion_count{}; //declaration of variable with initialization
    int dog_count{10}; //declaration of variable with initialization to 10
    int cat_count = 15; //declaration of variable with initialization to 15

    //can use expression as initialization
    int domestic_animal_count = {dog_count + cat_count} //declaration of variable with initialization to the sum of dog_count and cat_count

    //Won't compile because the variable does not exist
    int bad_initialization = {doesnotexist + doesnotexist2} //declaration of variable with initialization to the sum of two non-existent variables. This will cause a compilation error.

    //2.9 is a type double, so it will be truncated to 2 when assigned to an int variable
    int narrowing_conversion = {2.9}; //declaration of variable with initialization to 2.9, which will be truncated to 2
    
}