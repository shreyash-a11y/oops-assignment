#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area Function" << endl;
    }

    virtual void display() {
        cout << "Shape Class" << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }

    void display() {
        cout << "Circle" << endl;
    }
};

class Rectangle : public Shape {
private:
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() {
        cout << "Area of Rectangle = "
             << length * breadth << endl;
    }

    void display() {
        cout << "Rectangle" << endl;
    }
};

class Triangle : public Shape {
private:
    int base, height;

public:
    Triangle(int b, int h) {
        base = b;
        height = h;
    }

    void area() {
        cout << "Area of Triangle = "
             << (base * height) / 2 << endl;
    }

    void display() {
        cout << "Triangle" << endl;
    }
};

int main() {

    Circle c(5);
    Rectangle r(10, 4);
    Triangle t(8, 6);

    c.display();
    c.area();

    r.display();
    r.area();

    t.display();
    t.area();

    return 0;
}
