#include<iostream>
using namespace std;
int main();
//double power(double, int)
double power(double x, int n)
{
    cout<< "Power(2,0) = "<<power(2,0)<<endl;
    cout<< "power(2,1) = "<<power(2,1)<<endl;
    cout<< "power(2,2) = "<<power(2,2)<<endl;
    cout<< "power(2,3) = "<<power(2,3)<<endl;
    cout<< "power(2,-3) = "<<power(2,-3)<<endl;
    cout<< "power(2.01,3) = "<<power(2.01,3)<<endl;
    
//}

//{
    double y=1.0;
    for(int i=0; i<n; i++)
        y *= x;
    for(int i=0; i>n; i--)
        y /= x;
    return 0;
}
