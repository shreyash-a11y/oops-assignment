//4.	Define a class Rectangle with variables width and height of integer typwe along with following:

//(a)	void getdata() to initialize object values
//(b)	void calculatearea() to calculate and display the area.

#include<iostream>
using namespace std;

class Rectangle
{
int width;
int height;
public:
void getdata()
{
cout<<"Enter width and height: ";
cin>>width>>height;
}
void calculatearea()
{
cout<<"Area of rectangle: "<<width*height;
}
};

int main()
{
Rectangle r;
r.getdata();
r.calculatearea();
return 0;
}
