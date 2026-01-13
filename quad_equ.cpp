/* This program solves a quadratic equation by prompting the user 
for the coefficient values */ 
#include<iostream>
// Lots of cmath now in standard library
#include<cmath>
using namespace std;
int main()
{ 
float a, b, c; // 3 variables of type real.
float root; // float is a real type.
float x1, x2;
cout<<"Enter the values of a, b & c"<<endl; // Line 9
// Console input cin. >> extraction operator
cin>>a; // Line 10
cin>>b; 
cin>>c; 
// no square function need to x*x 
root= sqrt(b*b-4*a*c);
x1=(-b+root)/(2*a);
x2=(-b-root)/(2*a);
cout<<"The roots are " << x1 << " and " <<x2<<endl; // Line 16
return 0;
}