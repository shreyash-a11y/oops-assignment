#include <iostream>
using namespace std;
class Demo {
public:
    int x;

    Demo(int val = 0) {
        x = val;
        cout << "Constructor called, x = " << x << endl;
    }

    ~Demo() {
        cout << "Destructor called, x = " << x << endl;
    }

    void display() {
        cout << "Value: " << x << endl;
    }
};

int main() {
    int *pInt = new int;
    *pInt = 10;
    cout << "Dynamic int: " << *pInt << endl;
    delete pInt;
    float *pFloat = new float;
    *pFloat = 3.14;
    cout << "Dynamic float: " << *pFloat << endl;
    delete pFloat;
    int n = 3;
    int *arrInt = new int[n];

    for (int i = 0; i < n; i++) {
        arrInt[i] = i + 1;
    }

    cout << "Integer Array: ";
    for (int i = 0; i < n; i++) {
        cout << arrInt[i] << " ";
    }
    cout << endl;

    delete[] arrInt;

   
    float *arrFloat = new float[n];

    for (int i = 0; i < n; i++) {
        arrFloat[i] = (i + 1) * 1.1;
    }

    cout << "Float Array: ";
    for (int i = 0; i < n; i++) {
        cout << arrFloat[i] << " ";
    }
    cout << endl;

    delete[] arrFloat;
    Demo *obj = new Demo(100);
    obj->display();
    delete obj;
    Demo *objArr = new Demo[2]; 

    objArr[0].x = 10;
    objArr[1].x = 20;

    objArr[0].display();
    objArr[1].display();

    delete[] objArr;

    return 0;
}
