#include <iostream>
using namespace std;
int main()
{
    int n=5, j;
    for(int i=0; i<=n*2; i++)
    {
        for(j=0; j<=n*2; j++)
        {
            if(i<=n)
            {
                if ( j<n-i || j>n-i)
                {
                    cout<<" ";
                }
                else 
                {
                    cout<<"*";
                }
            }
            else
            {
                if ( j<i-n || j>i-n)
                {
                    cout<< " ";
                }
                else
                {
                    cout<<"*";
                }
            }
        }
        
        {
            if(j<=n)
            {
                if ( j<n+i || j>n+i)
                {
                    cout<<" ";
                }
                else 
                {
                    cout<<"*";
                }
            }
            else
            {
                if ( j<i+n || j>i+n)
                {
                    cout<< " ";
                }
                else
                {
                    cout<<"*";
                }
            }
        }
                cout<<"\n";
    }
    return 0;
}