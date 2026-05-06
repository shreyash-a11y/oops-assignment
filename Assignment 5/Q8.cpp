#include <iostream>
using namespace std;

class LibraryUser {
protected:
    string name;
    int id;
    string contact;

public:
    void getUserData() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Contact: ";
        cin >> contact;
    }

    void displayUserData() {
        cout << "\nName: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact: " << contact << endl;
    }
};

class Student : public LibraryUser {
private:
    int gradeLevel;

public:
    void getStudentData() {
        getUserData();

        cout << "Enter Grade Level: ";
        cin >> gradeLevel;
    }

    void displayStudentData() {
        displayUserData();

        cout << "Grade Level: " << gradeLevel << endl;
    }
};

class Teacher : public LibraryUser {
private:
    string department;

public:
    void getTeacherData() {
        getUserData();

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayTeacherData() {
        displayUserData();

        cout << "Department: " << department << endl;
    }
};

int main() {

    Student s;
    Teacher t;

    cout << "Enter Student Details" << endl;
    s.getStudentData();

    cout << "\nEnter Teacher Details" << endl;
    t.getTeacherData();

    cout << "\n--- Student Information ---" << endl;
    s.displayStudentData();

    cout << "\n--- Teacher Information ---" << endl;
    t.displayTeacherData();

    return 0;
}
