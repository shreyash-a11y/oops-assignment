#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:

    // Parameterized Constructor
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    // Copy Constructor
    Complex(const Complex &c) {
        real = c.real;
        imaginary = c.imaginary;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    friend void sum(Complex, Complex);
};

void sum(Complex c1, Complex c2) {

    int r = c1.real + c2.real;
    int i = c1.imaginary + c2.imaginary;

    cout << "Sum of Complex Numbers = ";
    cout << r << " + " << i << "i" << endl;
}

int main() {

    Complex c1(2, 3);
    Complex c2(4, 5);

    // Copy Constructor
    Complex c3(c1);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Copied Complex Number: ";
    c3.display();

    sum(c1, c2);

    return 0;
}
