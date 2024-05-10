// combination of all other inheritance type
// most commonly used inheritance type in real word applications

#include <iostream>
using namespace std;

class Car {
    public:
        void display1() {
            cout << "Car Class" << endl;
        }
};

class FuelCar : public Car {
    public:
        void display2() {
            cout << "FuelCar Class" << endl;
        }
};

class EVCar : public Car {
    public:
        void display3() {
            cout << "EVCar Class" << endl;
        }
};

class HybridCar : public FuelCar, public EVCar {
    public:
        void display4() {
            cout << "HybridCar Class" << endl;
        }
};

int main() {
    Car c;
    FuelCar f;
    EVCar e;
    HybridCar h;
    h.display4();
    h.display3();
    h.display2();
}