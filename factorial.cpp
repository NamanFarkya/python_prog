#include<iostream>
using namespace std;
int main()
{
    int i,n,fac=1;
    cout<<"Enter the positive number: ";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        fac=fac*i;
    }
    cout<<" The factorial of "<<n<<" = "<<fac<<endl;
    return  0;
}

