// The C++ compiler ignores comments which start with 
// double slashes like this, up to the end of the line.
/* Comments can also be written starting with a forward slash followed by a star, 
and ending with a star followed by another slash. The purpose of this style is when 
comments written span more than one line. Programs should ALWAYS include plenty of 
comments 

; for end of statement

boiler plate - code that has to be read but doesn't compule without

Will get warnings and errors.

This is a philosophy or paradigm. Python is just a syntax

Object Oriented Programming (OOP), allows for creating classes which are our own data type. Can make vectors for example. 
Strands provide reusability, modularity, inheritence
*/

// Include library called iostream which allows us to do input output
#include<iostream>

// Need this too always
// Treat everything in a standard way
using namespace std;

/* int means return an integer. main is the first function the compiler comes 
across only one per programme. Nothing passed into it.
Should be as sparse as possible just for calling functions
*/

int main()
{
// cout - console output. << insertion operator which inserts something to the screen.
// endl - end line
    cout << "Welcome to the C++ course" << endl;
// Gotta return some value and 0 is a good one
return 0;
}