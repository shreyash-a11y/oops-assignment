//QUESTION 1 -> Write a program to implement (a) pointer to an object (b) this pointer. Practice both ‘.’ (dot operator) and ‘→’ (arrow operator)

#include <iostream>
using namespace std;

class Student {
    int id;
    int marks;

public:
    void getData(int id, int marks) {
        this->id = id;
        this->marks = marks;
    }

    void showData() {
        cout << "Student ID: " << id << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1;
    Student *ptr;

    s1.getData(101, 85);
    cout << "Using dot operator:" << endl;
    s1.showData();

    cout << endl;

    ptr = &s1;
    cout << "Using arrow operator:" << endl;
    ptr->showData();

    return 0;
}
