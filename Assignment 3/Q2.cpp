#include <iostream>
using namespace std;

class B;

class A {
    int x;

public:
    A(int x) {
        this->x = x;
    }

    friend void swapValues(A &, B &);

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

    friend void swapValues(A &, B &);

    void show() {
        cout << "B = " << y << endl;
    }
};

void swapValues(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A objA(10);
    B objB(20);

    cout << "Before Swap:" << endl;
    objA.show();
    objB.show();

    swapValues(objA, objB);

    cout << endl << "After Swap:" << endl;
    objA.show();
    objB.show();

    return 0;
}
