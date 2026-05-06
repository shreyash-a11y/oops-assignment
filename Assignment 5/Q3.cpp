#include <iostream>
using namespace std;

class Base {
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;
};

class PublicDerived : public Base {
public:
    void show() {
        cout << a << endl;
        cout << b << endl;
    }
};

class ProtectedDerived : protected Base {
public:
    void show() {
        cout << a << endl;
        cout << b << endl;
    }
};

class PrivateDerived : private Base {
public:
    void show() {
        cout << a << endl;
        cout << b << endl;
    }
};

int main() {
    PublicDerived obj1;
    obj1.show();
    cout << obj1.a << endl;

    ProtectedDerived obj2;
    obj2.show();

    PrivateDerived obj3;
    obj3.show();

    return 0;
}
