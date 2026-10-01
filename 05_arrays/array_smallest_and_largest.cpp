#include <iostream>
using namespace std;

int main()
{
	int num[] = {54, 45, 32 , 546, 2};
	int size=5;
	
	int smallest= INT_MAX;
	int largest=INT_MIN;
	int smalest;
	int largest_index;
	
	for(int i=0 ; i<size ; i++){
	
	if(num[i]<smallest){
		smallest = num[i];
		smalest=i;		
	}
	else if(num[i]>largest){
		largest=num[i];
		largest_index=i;
	}
		
	}
	cout<<"index is: "<<smalest<<"\n";
	cout<<"smallest is : "<<smallest<<"\n";
	cout<<"index is: "<<largest_index<<"\n";	
	cout<<"Largest is : "<<largest<<"\n";
	
	
	return 0;
}