// enum is a data type which can be used for static values
#include <iostream>
using namespace std;

enum Gender // declaring an enum called "Gender"
{ 
    Male, // Represents male gender
    Female // Represents female gender
};

int main() {
    Gender gender = Male; // Create a variable of type "Gender" and initialize it with "Male"
    switch(gender) // Using a switch statement to handle different gender values
    {
    case Male:
        cout << "Gender is Male";
        break;

    case Female:
        cout << "Gender is Female";
        break;
    
    default:
        cout << "Value can be Male or Female";
        break;
    }
    return 0;
}
