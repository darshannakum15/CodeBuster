#include <iostream>
using namespace std;

int main()
{
	int a,c=0;
	cout<<"Enter the number :";
	cin>>a;
	
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
			
	}
		if(c==2)
		{
			cout<<"The number is prime";
		}
		else{
			cout<<"The number is not prime";
		}	
	return 0;
}
