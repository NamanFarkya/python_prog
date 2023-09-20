#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter the coefficients of a quadratic equation : \n";
    cout<<"\ta: ";
    cin>>a;
    cout<<"\tb: ";
    cin>>b;
    cout<<"\tc: ";
    cin>>c;
    cout<< "The Equation is : "<<a<<"*x*x + "<<b<<"*x +"<<c<<" = 0\n";
    float d = b*b - 4*a*c;
    float sqrtd = sqrt(d);
    float x1 = (-b + sqrtd)/(2*a);
    float x2 = (-b - sqrtd)/(2*a);
    cout<< "The Solution are : \n";
    cout<<" \tx1 ="<<x1<<endl;
    cout<<" \tx2 ="<<x2<<endl;
    cout<<"Check : a*x1*x1 + b*x1 + c = "<<a*x1*x1 + b*x1 + c;
    cout<<"\n      \t a*x2*x2 + b*x2 + c = "<<a*x2*x2 + b*x2 + c;
}
