#include <iostream>
using namespace std; 
int main() 
{
    int n=0; 
    cout << "type in a non-zero integer value"<<endl;
    cin >> n; 
    if (n%2==0) // tests if integer n is divisible by 2
    {
        cout<<n<<": is an even number"<<endl;
    }
    else // else if odd …
    {
        cout <<n<<": is an odd number"<<endl;
    }
    return 0;
}