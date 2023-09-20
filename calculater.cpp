#include<iostream>
using namespace std;
int main()
{
    int a,b,res;
    char opr;
    int q;
    for(int i = 1; i <= q; i++)
    {
    cout<<"Enter the first number: ";
    cin>>a;
    cout<< "Enter the operater :- (+,-,*,/): ";
    cin>>opr;
    cout<<"Enter the second number: ";
    cin>>b;
    if(opr == '+')
    {
        cout<<a<<opr<<b << endl;
        res = a + b;
        cout << res;
    }
    else if (opr == '-')
    {
        cout<<a<<opr<<b << endl;
        res = a - b;
        cout << res;
    }
    else if (opr== '*')
    {
        cout<<a<<opr<<b << endl;
        res = a * b;
        cout << res;
    }
    else if (opr=='/')
    {
        cout<<a<<opr<<b << endl;
        double res1 = (double )a / b;
        cout << res1;
    }
    else
    {
        cout<<"invalid input";
    }
    }
     return 0;
    
    
    
}