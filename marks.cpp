#include <iostream>
using namespace std;
int main()
{
	int english;
	int urdu;
	int pak_study;
	
//	hello brother
	cout<<"english: ";
	cin>>english;

	cout<<"urdu: ";
	cin>>urdu;
	
	cout<<"pakstudy: ";
	cin>>pak_study;
	int result;
	result = english + urdu + pak_study;
	
	cout<<"result is: ";
	cout<<result<<endl;
	int total=300;
	
	int percentage;
	percentage =(result*100)/total;
	
	cout<<"percentage: ";
	cout<<percentage<<"%"<<endl;
	
	if( percentage >= 33)
	{cout<<"student is pass";

	}
	else 
	{ cout<<" student is fail" <<endl;
	}
	if(percentage>=60)
	{cout<<"grade A"<< endl;
	}
	else
	{cout<<"grade B "<<endl;
	}
	
	
	return 0;
	
}


