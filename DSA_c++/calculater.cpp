#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter two integer : ";
    cin>>m>>n;
    char op;
    cout<<"Enter an operator (+,-,*,/,%): ";
    cin>>op;
    switch (op)
    {
    case '+' :
        cout<< m + n;
        break;
    case '-' :
        cout<< m - n;
        break;
    case '*' :
        cout<< m * n;
        break;
    case '/' :
        cout<< m / n;
        break;
    case '%' :
        cout<< m % n;
        break;
    default:
        cout<<"Invalid input";
        exit;
    }
    return 1;
}