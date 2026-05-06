#include <iostream>
using namespace std;

class B;

class A {
private:
    int num1;

public:
    A(int x) {
        num1 = x;
    }

    friend int add(A, B);
};

class B {
private:
    int num2;

public:
    B(int y) {
        num2 = y;
    }

    friend int add(A, B);
};

int add(A obj1, B obj2) {
    return obj1.num1 + obj2.num2;
}

int main() {

    A a(10);
    B b(20);

    int sum = add(a, b);

    cout << "Sum = " << sum << endl;

    return 0;
}
