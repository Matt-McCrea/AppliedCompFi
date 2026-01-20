#include<iostream>
using namespace std;
// Block defined by curly brackets.
/*
Block scope, accessable in a block
Funciton scope, accessable in a function
Global scope, accessable everywhere - avoid, less control and more large mistake opportunities
*/

int main()
{ // block 1 begins
    int x=22;
    { // block 2 begins
    int x=44;
    cout<<"Integer x = "<<x<<endl; 
    } // block 2 ends
    cout<<"Integer x = "<<x<<endl;
    { // block 3 begins
    int x=66;
    cout<<"Integer x = "<<x<<endl;
    } // block 3 ends
    cout<<"Integer x = "<<x<<endl;
    return 0;
} // block 1 ends