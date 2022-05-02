#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout<<setfill('*'); 
	for(int i=1;i<=5;i++){
		cout<<setw(i)<<i<<endl;
	}
	for(int i=4;i>=1;i--){
		cout<<setw(i)<<i<<endl;
	}
	return 0;
}
