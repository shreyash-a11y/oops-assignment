#include <iostream>
using namespace std;

// ---------------- SINGLE INHERITANCE ----------------
class A1 {
public:
    void showA1() {
        cout << "Single Inheritance - Class A1" << endl;
    }
};

class B1 : public A1 {
public:
    void showB1() {
        cout << "Single Inheritance - Class B1" << endl;
    }
};

// ---------------- MULTILEVEL INHERITANCE ----------------
class A2 {
public:
    void showA2() {
        cout << "Multilevel - Class A2" << endl;
    }
};

class B2 : public A2 {
public:
    void showB2() {
        cout << "Multilevel - Class B2" << endl;
    }
};

class C2 : public B2 {
public:
    void showC2() {
        cout << "Multilevel - Class C2" << endl;
    }
};

// ---------------- MULTIPLE INHERITANCE ----------------
class A3 {
public:
    void showA3() {
        cout << "Multiple Inheritance - Class A3" << endl;
    }
};

class B3 {
public:
    void showB3() {
        cout << "Multiple Inheritance - Class B3" << endl;
    }
};

class C3 : public A3, public B3 {
public:
    void showC3() {
        cout << "Multiple Inheritance - Class C3" << endl;
    }
};

// ---------------- HIERARCHICAL INHERITANCE ----------------
class A4 {
public:
    void showA4() {
        cout << "Hierarchical - Base Class A4" << endl;
    }
};

class B4 : public A4 {
public:
    void showB4() {
        cout << "Hierarchical - Derived Class B4" << endl;
    }
};

class C4 : public A4 {
public:
    void showC4() {
        cout << "Hierarchical - Derived Class C4" << endl;
    }
};

// ---------------- HYBRID INHERITANCE ----------------
class A5 {
public:
    void showA5() {
        cout << "Hybrid - Class A5" << endl;
    }
};

class B5 : public A5 {
public:
    void showB5() {
        cout << "Hybrid - Class B5" << endl;
    }
};

class C5 {
public:
    void showC5() {
        cout << "Hybrid - Class C5" << endl;
    }
};

class D5 : public B5, public C5 {
public:
    void showD5() {
        cout << "Hybrid - Class D5" << endl;
    }
};

int main() {

    // Single Inheritance
    B1 obj1;
    obj1.showA1();
    obj1.showB1();

    cout << endl;

    // Multilevel Inheritance
    C2 obj2;
    obj2.showA2();
    obj2.showB2();
    obj2.showC2();

    cout << endl;

    // Multiple Inheritance
    C3 obj3;
    obj3.showA3();
    obj3.showB3();
    obj3.showC3();

    cout << endl;

    // Hierarchical Inheritance
    B4 obj4;
    obj4.showA4();
    obj4.showB4();

    C4 obj5;
    obj5.showA4();
    obj5.showC4();

    cout << endl;

    // Hybrid Inheritance
    D5 obj6;
    obj6.showA5();
    obj6.showB5();
    obj6.showC5();
    obj6.showD5();

    return 0;
}
