#include <iostream>
#include <cmath> 
using namespace std;
int main() 
{ 
float a,b,c;
float d, x1, x2, x;
    cout << "Enter values of a, b & c in turn\n"; 
    cin >> a;
    cin >> b;
    cin >> c; 
    d= (b*b - 4*a*c);
    if (a==0) //simple case of a linear equation when a=0
    { 
        x=-c/b; 
        cout << "One root exists = " << x<<endl;
    } 
    else
        if (d>0) // 2 real distinct roots
        { 
            x1=(-b +sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            cout << "There are two real roots, x=" << x1 << " & " << x2 
<<endl;
        }

        else
            if (d==0) // 1 real b*b-4ac=0
            { 
                x=-b/(2*a);
                cout << "One 2-fold root exists = " << x<<endl; 
            }
        else
            if (d<0) // pair of complex conjugate roots p±iq
            {
                cout << "This equation has complex roots\n";
                double real=-b/(2.0*a); // this is p
                double im=sqrt(fabs(d))/(2.0*a); /* now calculate 
                q – coefficient of imaginary part*/
                cout<<"x1 = "<<real<<"+i*"<<im<<endl; // = p+iq
                cout<<"x2 = "<<real<<"-i*"<<im<<endl; // =p-iq
            }
            return 0;
} 