#include<iostream>
using namespace std;

void swap(int &v1,int &v2)
{
	int temp;
	temp=v1;
	v1=v2;
	v2=temp;
}
int main()
{
	int a,b;
	cout<<"Enter the value of A and B: ";
	cin>>a>>b;
	
	
	cout<<"\nBefore Swapping.."<<endl;
	cout<<"Value of A : "<<a<<endl;
	cout<<"Value of B : "<<b<<endl;
	
	swap(a,b);
	cout<<"\nAfter Swapping.."<<endl;
	cout<<"Value of A : "<<a<<endl;
	cout<<"Value of B : "<<b<<endl;
	system("pause>nul");
	return 0;
}
