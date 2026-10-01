#include <iostream>
using namespace std;

int decitobina(int decnum){
	int ans , power=1;
	while(decnum>0) {
		int rem = decnum%2;
		decnum /=2;
		
		ans+=(rem*power);
		power*=10;
	}
	return ans;	
}
int binatodeci(int binum){
	int ans , power=1;
	while(binum>0){
		int rem=binum % 10;
		ans += (rem*power);
		
		binum/=10;
		power*=2;
	}
	return ans;
}
int main()
{
	int decnum;
	int binum;
	cout<<"Enter number: ";
	cin>>decnum;
	cout<<decitobina(decnum);
	cout<<"\n";
	
	cout<<"enter number: ";
	cin>>binum;
	cout<<"\n";
	cout<<binatodeci(binum);
	
	
	return 0;
}