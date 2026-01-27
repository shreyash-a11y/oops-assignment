//QUESTION 5- 5.	Define a class Complex with variables real and imaginary along with following: 
//(a)void setComplex (float, float) to initialize object values.
//(b)	void displayComplex() to show the complex number
//(c)	Pass and return objects to calculate sum of two complex numbers. Display the sum.

#include<iostream>
using namespace std;

class Complex
{
float real;
float imag;
public:
void setComplex(float r,float i)
{
real=r;
imag=i;
}
void displayComplex()
{
cout<<real<<" + "<<imag<<"i"<<endl;
}
Complex addComplex(Complex c)
{
Complex temp;
temp.real=real+c.real;
temp.imag=imag+c.imag;
return temp;
}
};

int main()
{
Complex c1,c2,c3;
float r,i;
cout<<"Enter real and imaginary part of first complex number: ";
cin>>r>>i;
c1.setComplex(r,i);
cout<<"Enter real and imaginary part of second complex number: ";
cin>>r>>i;
c2.setComplex(r,i);
c3=c1.addComplex(c2);
cout<<"First complex number: ";
c1.displayComplex();
cout<<"Second complex number: ";
c2.displayComplex();
cout<<"Sum of complex numbers: ";
c3.displayComplex();
return 0;
}
