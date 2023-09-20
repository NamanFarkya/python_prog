#include<iostream>
using namespace std;

int main()
{
    int r;
    cin >> r;
    int count = 1;
    for ( int i = 1; i <= r; i++)
    {
        for(int s = r - i; s >= 0; s--)
        {
            cout << " ";
        }
        for(int p = 1; p <= i; p++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    
    return 0;
}

/*
    */