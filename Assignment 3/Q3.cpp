//QUESTION 3 -> 3.	Write a program to add data objects of two different classes using friend functions

#include <iostream>
using namespace std;

class B;

class A {
    int x;

public:
    A(int x) {
        this->x = x;
    }

    friend int addValues(A, B);

    void show() {
        cout << "A = " << x << endl;
    }
};

class B {
    int y;

public:
    B(int y) {
        this->y = y;
    }

    friend int addValues(A, B);

    void show() {
        cout << "B = " << y << endl;
    }
};

int addValues(A a, B b) {
    return a.x + b.y;
}

int main() {
    A objA(15);
    B objB(25);

    cout << "Object values:" << endl;
    objA.show();
    objB.show();

    int sum = addValues(objA, objB);

    cout << endl << "Sum = " << sum << endl;

    return 0;
}
