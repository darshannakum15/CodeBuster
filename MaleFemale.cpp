#include<iostream>
using namespace std;

enum Gender {Male,Female};

int main(){	
		
	Gender gender = Male;
	if(gender){
		cout<<"Male";		
	}
	else
	{
		cout<<"Female";
	}
	return 0;
}
