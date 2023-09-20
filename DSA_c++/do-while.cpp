#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
   int N = 100;
   double sum = 0.0;
   int x = 1;
   do sum += 1.0/x++;
   while (x <= N);
   cout<<" The sum of the first"<<N<<" reciprocals is "<< sum;
}