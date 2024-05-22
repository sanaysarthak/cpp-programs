// class Template Example

#include <iostream>
using namespace std;

template <class T1, class T2>
class Sample {
    private:
        T1 a;
        T2 b;

    public:
        Sample(T1 x, T2 y) {
            a = x;
            b = y;
        }
        void disp() {
            cout << "a = " << a << "\tb = " << b << endl;
        }
};

int main() {
    Sample <int, float> S1(12, 23.3);
    Sample <char, int> S2('N', 12);
    S1.disp();
    S2.disp();
    return 0;
}
