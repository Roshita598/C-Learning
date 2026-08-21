#include <iostream>
using namespace std;

int main() {
    //variable may contain a random garbage value. WARNING
    int elephant_count; //declaration of variable
    int lion_count{}; //declaration of variable with initialization
    int tiger_count(40); //declaration of variable with initialization to 40
    int dog_count{10}; //declaration of variable with initialization to 10
    int cat_count = 15; //declaration of variable with initialization to 15
    int domestic_animal_count = {dog_count + cat_count}; //declaration of variable with initialization to the sum of dog_count and cat_count

    //Check the size of the variables with sizeof operator

    cout << "Size of elephant_count: " << sizeof(elephant_count) << " bytes" << endl;
    cout << "Size of lion_count: " << sizeof(lion_count) << " bytes" << endl;
    cout << "Size of tiger_count: " << sizeof(tiger_count) << " bytes" << endl;
    cout << "Size of dog_count: " << sizeof(dog_count) << " bytes" << endl;
    cout << "Size of cat_count: " << sizeof(cat_count) << " bytes" << endl;
    cout << "Size of domestic_animal_count: " << sizeof(domestic_animal_count) << " bytes" << endl;

    return 0;
}