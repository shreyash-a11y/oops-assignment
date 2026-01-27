//QUESTION 1- Create a structure in C++ containing the details of Students as details below and a main function to execute the structure
#include<iostream>
using namespace std;

struct Student
{
string name;
int rollno;
string degree;
string hostel;
float cgpa;

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

void updateDetails()
{
cout<<"Enter new name: ";
cin>>name;
cout<<"Enter new degree: ";
cin>>degree;
}

void updateCGPA()
{
cout<<"Enter updated CGPA: ";
cin>>cgpa;
}

void updateHostel()
{
cout<<"Enter updated hostel: ";
cin>>hostel;
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
s.updateCGPA();
s.updateHostel();
cout<<"After updating details:"<<endl;
s.displayDetails();
return 0;
}
