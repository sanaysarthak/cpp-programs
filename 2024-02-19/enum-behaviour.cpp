// This code is not for executing it to get a desirable output, but for understanding how the enum works in C++
// invalid codes are commented, so that the editor doesn't show them up as errors

#include <iostream>
using namespace std;

enum days {
    sun, mon, tue, wed, thru, fri, sat 
};

int main() {
    days today;
    today = tue; // value 2 will be assigned in the enumerator
    // today = 6 // (invalid, because 6 is not an enumerator)
    // today++; // (invalid, today is of type days, we cannot apply ++ to structure variable also)
    // today = mon + fri; // invalid
    int num = sat; // valid, days data type converted into int type and value 6 will be stored in the num data type
    num = 5 + mon; // valid, mon converted to int with value 1

    return 0;
}
