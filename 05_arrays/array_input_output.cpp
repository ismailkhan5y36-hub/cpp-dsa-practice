#include <iostream>
using namespace std;

int main()
{
	int size =5;
	int marks[size];
	
	for(int i=0 ; i<size ; i++){
		cout<<"enter number: ";
		cin>>marks[i];
	}
	cout<<"Output";
	for(int i=0 ; i<size ; i++){
		
		cout<<marks[i]<<endl;
	}


	
	return 0;
}