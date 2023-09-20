#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N = 1000;
    double sum = 0.0;
    int x = 1;
    repeat :
    sum += 1.0/x++;
    if(x<=N)
    goto repeat;
    cout<< "The sum of the first "<< N << " reciprocals is "<< sum;
}