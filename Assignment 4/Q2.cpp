//QUESTION 2

#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }

    Rectangle(int x) {
        length = x;
        breadth = x;
    }

    int area() {
        return length * breadth;
    }

    ~Rectangle() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Rectangle r[3] = {
        Rectangle(),
        Rectangle(5),
        Rectangle(4, 6)
    };

    for (int i = 0; i < 3; i++) {
        cout << "Area of rectangle " << i + 1 << " = " << r[i].area() << endl;
    }

    return 0;
}
