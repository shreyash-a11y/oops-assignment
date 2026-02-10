//QUESTION 7 -> Write a program to pass an object as an argument and return the object from a function.
//a.	Use pass-by-value
//b.  Use pass-by reference


#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int x = 0) {
        this->x = x;
    }

    int get() {
        return x;
    }

    static Number addValueByValue(Number n) {
        n.x = n.x + 10;
        return n;
    }

    static Number addValueByReference(Number &n) {
        n.x = n.x + 10;
        return n;
    }
};

int main() {
    Number obj1(20);
    Number obj2(20);

    cout << "Before pass-by-value: " << obj1.get() << endl;
    Number result1 = Number::addValueByValue(obj1);
    cout << "After pass-by-value (original): " << obj1.get() << endl;
    cout << "Returned object (value): " << result1.get() << endl;

    cout << endl;

    cout << "Before pass-by-reference: " << obj2.get() << endl;
    Number result2 = Number::addValueByReference(obj2);
    cout << "After pass-by-reference (original): " << obj2.get() << endl;
    cout << "Returned object (reference): " << result2.get() << endl;

    return 0;
}
