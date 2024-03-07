// Write a C++ program to create class Car having data members Company and Top_speed
// Create member functions SetData() and DisplayData() and create two objects of class Car

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
            cout << "\nTop Speed: " << top_speed << endl << "\n";
        }
};

int main() {
    car c1, c2;
    c1.setData();
    c1.displayData();
    c2.setData();
    c2.displayData();
    return 0;
}
