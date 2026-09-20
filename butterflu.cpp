#include <iostream>
using namespace std;
int main()
{
	int n=4;
//	upper body
	for(int i=0 ;i<=n ; i++){
		for(int j=0; j<i+1 ; j++){
			cout<< "*";
		}
		
		for(int j=1; j <= 2*n-2*i; j++){
			cout<< " ";
		}
		
		
		for(int j=0 ; j<i+1 ; j++){
			cout<< "*";
		}
		cout<<endl;
		
	}
//	lower bodey
	for(int i=n ; i<=)

	
	
	
	return 0;
}