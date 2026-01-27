//QUESTION 6 - Implement scope resolution operator : : for the following uses:
//(c)	Access a static variables

#include<iostream>
using namespace std;

class Sample
{
public:
static int count;
void show()
{
cout<<"Count value: "<<count;
}
};

int Sample::count=5;

int main()
{
Sample s;
s.show();
return 0;
}
