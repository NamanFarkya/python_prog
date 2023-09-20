/* A More Robust Implementation of the Quadratic Formula*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Enter the coefficients of a quadratic equation : "<<endl;
    cout<<"\ta: ";
    cin>>a;
    cout<<"\tb: ";
    cin>>b;
    cout<<"\tc: ";
    cin>>c;
    cout<<"The Equation is : "<<a<<"*x*x + "<<b<<"*x + "<<c<<" = 0"<<endl;
    double d = b*b - 4*a*c;  //discriminant
    if (d<0)
    {
        cout<<"The discriminant, d = "<< d << " < 0 , so there are no real solutions."<<endl;
        return 0;
    }
    double sqrtd = sqrt(d);
    double x1 = (-b + sqrtd)/(2*a);
    double x2 = (-b - sqrtd)/(2*a);
    cout<<"The solution are : "<< endl;
    cout<<"\tx1 = "<< x1 << endl;
    cout<<"\tx2 = "<< x2 << endl;
    cout<<"Check: "<< endl;
    cout<<"\ta*x1*x1 + b*x1 + c = "<<a*x1*x1 + b*x1 + c<<endl;
    cout<<"\ta*x2*x2 + b*x2 + c = "<<a*x2*x2 + b*x2 + c;
}