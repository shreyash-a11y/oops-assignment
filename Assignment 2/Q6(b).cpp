//QUESTION 6 - Implement scope resolution operator : : for the following uses
//(b) (b)	Access a global variable with same name as a local variable

#include<iostream>
using namespace std;

int x=10;

int main()
{
int x=20;
cout<<"Local x: "<<x<<endl;
cout<<"Global x: "<<::x;
return 0;
}
