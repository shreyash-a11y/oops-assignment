#include <iostream>
using namespace std;

template <class T>
class Array {
private:
    T arr[5];

public:

    void input() {

        cout << "Enter Array Elements:" << endl;

        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    void display() {

        cout << "Array Elements: ";

        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    Array<int> a;

    a.input();

    a.display();

    return 0;
}
