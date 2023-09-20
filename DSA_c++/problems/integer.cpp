#include<iostream>
#include<bitset>
using namespace std;
int main();
void find_maximum(int l,int m, int n, int p)
{
    cout<<" Enter four intergers : ";
    cin>>l>>m>>n>>p;
    if(l>m)
    {
        if (l>n)
        {
            if(l>p)
            {
                cout<< "l is greatest"<<l<<endl;
            }
            else
            {
                cout<<" p is maximum"<<p<<endl;
            }
        }
        
    }
    else if (m>n)
    {
        if(m>p)
        {
            cout<<"m is maximum"<<m<<endl;
        }
        else
        {
            cout<<" p is maximum"<<p<<endl;
        }
    }
    else if (n>p)
    {
        cout<<"n is maximum"<<n<<endl;
    }
    else
    {
        cout<<"p is maximum"<<p<<endl;
    }
    
    cout<<" l= "<<l<<" m= "<<m<<" n= "<<n<<" p= "<<p<<endl;
    cout<<"Their maximum is: "<<endl;
    find_maximum(l,m,n,p);
    
}