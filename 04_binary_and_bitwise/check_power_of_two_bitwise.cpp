#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"enter number: ";
	cin>>num;
	
	if(num>0 && (num&(num-1))==0){
		cout<<num<<" number is power of 2";
		
	}
	else{
		cout<<"number is not";
	}
	
	return 0;
}