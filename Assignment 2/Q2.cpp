//QUESTION 2-Differentiate between private and public access/scope.
//Perform the question no. 1 with class instead of structure with having the data members private and some member functions in private scope and some in public scope.



/*Difference between private and public access

public:
Members declared as public can be accessed from anywhere in the program.
Public members are used to interact with the object.
Functions declared public can be called using object name.

private:
Members declared as private cannot be accessed directly outside the class.
Private members are used to hide data for security.
Private functions can only be called from inside the class.*/

#include<iostream>
using namespace std;

class Student
{
private:
string name;
int rollno;
string degree;
string hostel;
float cgpa;

void updateCGPA()
{
cout<<"Enter updated CGPA: ";
cin>>cgpa;
}

public:
void addDetails()
{
cout<<"Enter name: ";
cin>>name;
cout<<"Enter roll number: ";
cin>>rollno;
cout<<"Enter degree: ";
cin>>degree;
cout<<"Enter hostel: ";
cin>>hostel;
cout<<"Enter CGPA: ";
cin>>cgpa;
}

void updateHostel()
{
cout<<"Enter updated hostel: ";
cin>>hostel;
}

void modifyCGPA()
{
updateCGPA();
}

void displayDetails()
{
cout<<"Name: "<<name<<endl;
cout<<"Roll No: "<<rollno<<endl;
cout<<"Degree: "<<degree<<endl;
cout<<"Hostel: "<<hostel<<endl;
cout<<"CGPA: "<<cgpa<<endl;
}
};

int main()
{
Student s;
s.addDetails();
s.displayDetails();
s.modifyCGPA();
s.updateHostel();
cout<<"After updating details:"<<endl;
s.displayDetails();
return 0;
}
