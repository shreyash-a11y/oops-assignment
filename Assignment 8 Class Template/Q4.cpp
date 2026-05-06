#include <iostream>
using namespace std;

template <class T>
class Arithmetic {
private:
    T a, b;

public:
    Arithmetic(T x, T y) {
        a = x;
        b = y;
    }

    void add() {
        cout << "Addition = "
             << a + b << endl;
    }

    void subtract() {
        cout << "Subtraction = "
             << a - b << endl;
    }

    void multiply() {
        cout << "Multiplication = "
             << a * b << endl;
    }

    void divide() {
        cout << "Division = "
             << a / b << endl;
    }
};

int main() {

    Arithmetic<int> obj(20, 10);

    obj.add();
    obj.subtract();
    obj.multiply();
    obj.divide();

    return 0;
}
