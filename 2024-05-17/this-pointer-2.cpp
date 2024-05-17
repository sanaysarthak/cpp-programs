// 2nd Example code for this pointer in C++

#include <iostream>
using namespace std;

class Person {
    private:
        int age;
    
    public:
        Person(int x) {
            age = x;
        }
        void display() {
            cout << "Age = " << age << endl;
        }
        Person olderperson(Person p) {
            if(age > p.age)
                return *this; // *this means to return the caller object
            else
                return p; // the object passed as the arguments within the parameters
        }
};

int main() {
    Person r(35), h(30);
    Person o = r.olderperson(h); // over here, r is the caller object and h is the object passed as arguments within the parameters
    o.display();
    return 0;
}
