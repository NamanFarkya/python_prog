#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int m, n;
    cout<<" Enter the two integer number: "<<endl;
    cin>>m>>n;
    cout<<"Their maximum is: "<< (m>n ? m : n)<<endl;
    cout<<"Their minimum is: "<< (m<n ? m : n)<<endl; 
    return 0;
}