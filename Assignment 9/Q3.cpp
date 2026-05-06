#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[20];

    void input() {

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }

    void display() {

        cout << "Roll Number: "
             << roll << endl;

        cout << "Name: "
             << name << endl;
    }
};

int main() {

    Student s1;

    s1.input();

    ofstream outFile("student.dat", ios::binary);

    outFile.write((char*)&s1, sizeof(s1));

    outFile.close();

    Student s2;

    ifstream inFile("student.dat", ios::binary);

    inFile.read((char*)&s2, sizeof(s2));

    inFile.close();

    cout << "\nData Read From File\n";

    s2.display();

    return 0;
}
