#include <iostream>
using namespace std;

int sumofArry(int arr[] , int sz){
	int ans=0;
	for(int i=0 ; i<sz ; i++){
		ans +=arr[i];
	}
	return ans;
}
int proofArry(int arr[] , int sz)
{
	int pro=1;
	for(int i=0 ; i<sz ; i++){
		pro =pro*arr[i];
	}
	return pro;
}


int main()
{
	int arr[]={1 , 2, 3, 4, 5};
	int sz=5;
	
	cout<<sumofArry( arr, sz)<<endl;
	cout<<proofArry(arr , sz);
	
	return 0;
}