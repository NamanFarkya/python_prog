#include <iostream>
using namespace std;
int main ()
{
	int n,j,p,m;
	cout<<"Enter the number to display time : ";
	cin>>n;
    for (int i=0;i<=n;++i)
	    {
		for(j=4; j<=n;++j)
		{	
			cout<<" ";
		}	
		for(int k=1; k<=j ; k++)
		{
		cout<<"* ";
		}
		cout<<endl;
		}
	for(p=1; p<=n*2-1;p++)
	{
		for( m=0; m<=p;m++)
	    {
		    cout<<p;	
        }
		for (int l=1; l<=m; l++)
		{
			cout<<p<<endl;
		}
	}
		
	cout<<"Complete the square stars";
    return 0;
}