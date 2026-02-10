//QUESTION 5 -> Write a program using Array of Objects to display area of multiple rectangles.

#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int breadth;

public:
    void setData(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r[3];

    r[0].setData(5, 4);
    r[1].setData(10, 2);
    r[2].setData(3, 6);

    cout << "Areas of Rectangles:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Rectangle " << i + 1 << " Area = " << r[i].area() << endl;
    }

    return 0;
}
