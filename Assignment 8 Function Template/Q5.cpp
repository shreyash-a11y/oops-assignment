#include <iostream>
using namespace std;

template <class T>
void process(T a) {

    cout << "Single Parameter: "
         << a << endl;
}

template <class T>
void process(T a, T b) {

    cout << "Two Same Type Parameters: "
         << a << " " << b << endl;
}

template <class T1, class T2>
void process(T1 a, T2 b) {

    cout << "Two Different Type Parameters: "
         << a << " " << b << endl;
}

int main() {

    process(10);

    process(5, 8);

    process(10, 5.5);

    return 0;
}
