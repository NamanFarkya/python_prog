#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter The Number";
    cin >> r;

    for ( int i = 1; i <= r; i++)
    {
        for(int s = r - i; s >= 0; s=s-2)
        {
            cout << " ";
        }
        for(int p = 1; p <= i; p++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}

/*
  *
 * *
* * *
*/