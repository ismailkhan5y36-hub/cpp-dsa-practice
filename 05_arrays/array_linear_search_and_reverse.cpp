#include <iostream>
#include <algorithm>
using namespace std;
int linear(int arr[] , int sz , int target){
	
	for(int i=0 ; i<sz ; i++)
	{
		if(arr[i] == target)
		{
			return i;
		}
	}
	return -1;	
}

void reversArry(int arr[] , int sz){
	int start=0;
	int end = sz-1;
	while(start < end){
		swap( arr[start], arr[end]);
		start++; 
		end--;
	}
	
	
}
int main()
{
	int arr[]={3, 43, 5,76, 65, 5};
	int sz = 6;
	int target = 65;
	reversArry(arr , sz);
//	cout<<linear( arr , sz , target);
	for(int i=0 ; i<sz ; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
	
}