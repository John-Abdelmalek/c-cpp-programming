// A program where I practice creating a class and its object in C++,
// and print the object's attributes.

#include <iostream>
using namespace std;

class car {
    public:
        int license_number;
        string make;
};

int main()
{
    car my_car;
 
    my_car.license_number = 12345;
    my_car.make = "BMW";

    cout << my_car.license_number << "\n";
    cout << my_car.make << "\n" << endl;

    return 0;
}
