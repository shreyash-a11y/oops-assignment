#include <iostream>
using namespace std;

template <class T1, class T2>
class Pair {
private:
    T1 value1;
    T2 value2;

public:
    Pair(T1 a, T2 b) {
        value1 = a;
        value2 = b;
    }

    void display() {

        cout << "First Value = "
             << value1 << endl;

        cout << "Second Value = "
             << value2 << endl;
    }
};

int main() {

    Pair<int, float> p(10, 5.5);

    p.display();

    return 0;
}
