#include<iostream>
using namespace std;
int main()
{
    int N=10;
    for(int i=0; i<=N; i++)
    {
        for(int j=0; j<2*N; j++)
        if(j<N-i || j>N+i)
        cout<< " ";
        else
        cout<<"*";
        cout<<endl;
    }
}