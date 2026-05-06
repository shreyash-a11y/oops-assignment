#include <iostream>
using namespace std;

class Base {
protected:
    int num;   

public:
    void setValue(int n) {
        num = n;
    }
};

class Derived : public Base {
public:
    void display() {
      
        cout << "Value of num is: " << num << endl;
    }
};

int main() {
    Derived obj;

    obj.setValue(10);  
    obj.display();   

    return 0;
}
