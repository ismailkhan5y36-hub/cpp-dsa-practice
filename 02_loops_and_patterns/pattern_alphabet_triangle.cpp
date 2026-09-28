#include <iostream>
using namespace std;
int main()
{
	int p=15;
	char lk='A';
	
	
	
	for(int i=0 ; i<p ; i++){
		for(int j=0; j<i+1 ; j++){
			cout<<lk<<" ";
		}
		cout<<endl;
		lk++;
	}
	
	return 0;
}