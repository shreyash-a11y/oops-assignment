//QUESTION 4 -> Write a program to demonstrate the working of friend class.

#include <iostream>
using namespace std;

class B;

class A {
    int x;

public:
    A(int x) {
        this->x = x;
    }

    friend class B;

    void show() {
        cout << "A = " << x << endl;
    }
};

class B {
public:
    void display(A a) {
        cout << "Accessing private data of A from B: " << a.x << endl;
    }
};

int main() {
    A objA(50);
    B objB;

    cout << "From class A:" << endl;
    objA.show();

    cout << endl << "From friend class B:" << endl;
    objB.display(objA);

    return 0;
}
