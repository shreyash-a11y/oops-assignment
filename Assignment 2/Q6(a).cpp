//QUESTION 6 - Implement scope resolution operator : : for the following uses:
//  (a)Class functions defined outside the class

#include<iostream>
using namespace std;

class Test
{
public:
void show();
};

void Test::show()
{
cout<<"Function defined outside the class";
}

int main()
{
Test t;
t.show();
return 0;
}
