#include <iostream>
using namespace std;

int main()
{
	int m,a,i=0;
	cout<<"Enter the number :";
	cin>>a;
	
	m=a/2;
	for(int i=2;i<=m;i++)
	{
		if(a%i==0)
		{
			cout<<"The number is not prime";
			break;
		}
		else{
			cout<<"The number is prime";
			break;
		}
			
	}	
	return 0;
}
