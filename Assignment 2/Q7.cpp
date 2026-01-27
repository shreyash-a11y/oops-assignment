//QUESTION 7- 7.	Create a code to implement the namespace and use similar variables and functions defined in different code sections.
#include<iostream>
using namespace std;

namespace First
{
int x=10;
void show()
{
cout<<"First namespace x = "<<x<<endl;
}
}

namespace Second
{
int x=20;
void show()
{
cout<<"Second namespace x = "<<x<<endl;
}
}

int main()
{
First::show();
Second::show();
return 0;
}
