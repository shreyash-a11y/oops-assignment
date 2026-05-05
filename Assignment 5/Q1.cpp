#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


class Student : public Person {
private:
    int rollNo;

public:
    void setStudent(string n, int a, int r) {
        name = n;    
        age = a;
        rollNo = r;
    }

    void displayStudent() {
        cout << "Name: " << name
             << ", Age: " << age
             << ", Roll No: " << rollNo << endl;
    }
};

int main() {

    Person p;
    p.setPerson("Rahul", 25);
    cout << "Person Details:\n";
    p.displayPerson();

    cout << endl;
    Student s;
    s.setStudent("Amit", 20, 101);
    cout << "Student Details:\n";
    s.displayStudent();

    return 0;
}
