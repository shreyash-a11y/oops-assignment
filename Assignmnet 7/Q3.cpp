#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:

    void area(int base, int height) {
        cout << "Area of Right Angle Triangle = "
             << 0.5 * base * height << endl;
    }

    void area(float side) {
        cout << "Area of Equilateral Triangle = "
             << (1.732 / 4) * side * side << endl;
    }

    void area(float a, float b, float c) {

        float s = (a + b + c) / 2;

        float ar = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "Area of Isosceles Triangle = "
             << ar << endl;
    }
};

int main() {

    Triangle t;

    t.area(10, 5);

    t.area(6.0f);

    t.area(5.0f, 5.0f, 6.0f);

    return 0;
}
