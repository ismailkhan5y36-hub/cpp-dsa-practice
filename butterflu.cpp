#include <iostream>
using namespace std;
int main()
{
	int n=4;
	
	for(int i=0; i<n ;i++)
	{
		for(int j=0; j<i+1 ; j++){
			
		}
		
		for(int o=0; o>n-i-1 ; o--){
			cout<<" ";
		}
		cout<<"*";
	
		
		for(int p=0; p<n-1 ;p++){
			cout<<" ";
		}
		
		
		for(int k=0; k<i+1; k++){
		cout<<"*";	
		}
		
		cout<<endl;
	}
	
	
	
	return 0;
}