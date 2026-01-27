//QUESTION 3- Create a code snippet that illustrates the following: Calling of private member functions inside public member function.
#include<iostream>
using namespace std;

class Demo
{
private:
void showMessage()
{
cout<<"Hello this is oops assignment 2";
}

public:
void display()
{
showMessage();
}
};

int main()
{
Demo d;
d.display();
return 0;
}
