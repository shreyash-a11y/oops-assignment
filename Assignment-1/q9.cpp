#include<iostream>
using namespace std;
int main(){
int a,b;
char ch;
cout << "Enter first number: ";
cin >> a;
cout << "Enter second number: ";
cin >> b;
cout << "Enter operator: ";
cin >> ch;

switch(ch){
case '+':cout<<a+b;break;
case '-':cout<<a-b;break;
case '*':cout<<a*b;break;
case '/':cout<<a/b;break;
default:cout<<"Invalid";
}
return 0;
}
