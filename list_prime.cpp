#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value ";
    cin>> x ;
    cout<<"Here is the List of all the Prime Numbers is Below"<< x <<endl;
    for(int m=2; m<x;m++)
    {
    for(int n=2; n*n<=m;n++)
    {
        if(m % n == 0)
        break;
        else if(n+1 > sqrt (m))
        {
            cout<< m <<endl;
        }
    }
    }
    cout<<"hence, This prime no.";
    return 0;
}