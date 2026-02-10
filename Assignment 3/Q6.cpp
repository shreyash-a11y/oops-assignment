//QUESTION 6 -> Write a program to define function cube() as inline for calculating cube of a number

#include <iostream>
using namespace std;

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int n = 5;

    cout << "Number = " << n << endl;
    cout << "Cube = " << cube(n) << endl;

    return 0;
}
