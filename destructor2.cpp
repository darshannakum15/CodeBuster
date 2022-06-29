#include<iostream>
using namespace std;
int count=0;
class alpha
{
	public:
	alpha()
	{
		count++;
		cout<<"\n Created Objects   = "<<count;
	}
	~alpha()
	{
		cout<<"\n Destroyed Objects = "<<count;
		count--;
	}
};
int main()
{
	cout<<"\n\n Main block\n";
	alpha a1,a2,a3,a4;
	{
		cout<<"\n\n Block 1 in main block\n";
		alpha a5;
		cout<<"\n\n Exit from block 1 in the main block\n";
	}
	cout<<"\n\n Exit from main block\n";
	return 0;
}
