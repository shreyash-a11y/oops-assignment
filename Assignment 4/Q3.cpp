#include <iostream>
using namespace std;

class Demo {
public:
    
    Demo() {
        cout << "Constructor called\n";
    } 
    ~Demo() {
        cout << "Destructor called\n";
    } 
};

int main() {
    Demo obj;  

    cout << "Inside main\n";

    return 0;  
