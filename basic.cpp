#include<iostream>
using namespace std;

int x=2;
int main()
{
    int x=4;
    {
        int x=8;
        cout<<x;
        cout<<endl;
    }
    cout<<x;
    cout<<endl;
    cout<<::x;
    cout<<endl;
    return 0;
}