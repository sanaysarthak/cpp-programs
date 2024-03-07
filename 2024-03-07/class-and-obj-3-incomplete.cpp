// Write a C++ program to create class Car having data members Company and Top_speed
// Create member functions SetData() and DisplayData() and create two objects od class Car

#include <iostream>
using namespace std;

class car {
    private:
        string company;
        int top_speed;
    public:
        void setData() {
            cout << "Enter company name: ";
            cin >> company;
            cout << "Enter top speed: ";
            cin >> top_speed;
        }
        void displayData() {
            cout << "\nCompany: " << company;
            cout << "\nTop Speed: " << top_speed;
        }
};

