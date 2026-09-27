#include <iostream>
using namespace std;

// 1 Function
void studentinformation()
{
	string name;
	int roll_no;
	int classe;
	
	cout<<"Enter your Name: ";
	cin>>name;
	cout<<"Enter Your Roll No: ";
	cin>>roll_no;
	cout<<"Enter your Class: ";
	cin>>classe;	
	cout<<"\n\n";
	cout<<"Result\n\n";
	cout<<"Your name is: "<<name<<endl;
	cout<<"your Roll no is: "<<roll_no<<endl;
	cout<<"Your Class is: "<<classe<<endl;
	
}

// 2 Function

void markscalculate(){
//datatypes 
	
	int eng;
	int urdu;
	int math;
	int chemist;
	int bio;
	int obtain;
	int total_marks=500;
//input/output function
	
	cout<<"enter Marks of The Subject \n";
	cout<<"English: ";
	cin>>eng;
	cout<<"urdu: ";
	cin>>urdu;
	cout<<"Mathematics: ";
	cin>>math;
	cout<<"Chemistry: ";
	cin>>chemist;
	cout<<"Biology: ";
	cin>>bio;
	
//calculation
	obtain = eng+urdu+math+chemist+bio;
	cout<<"Total Marks is: "<<obtain<<endl;
	
	double percentage = (double)obtain / total_marks * 100;
	cout<<"percentage is: "<<percentage<<"\n";
	
//grade system
	if(percentage>80){
		cout<<"Grade is: A ""\n";
	}
	else if(percentage>60){
		cout<<"grade is: B \n";
	}
	else if(percentage>50){
		cout<<"grade is: C \n";
	}
	else{
		cout<<"Grade is: D \n";
	}

//pas fail system
	
	if(percentage>80){
		cout<<"You are Pass \n";
	}
	else if(percentage>60){
		cout<<"You are Pass \n";
	}
	else if(percentage>50){
		cout<<"You are Pass \n";
	}
	else{
		cout<<"You are Fail \n";
	}
}

// 3 Function
void attendence()
{
	double day;
	int total_day=220;
	double percentage;
	cout<<"================================"<<endl;
	cout<<"      Attendence Checker \n";
	cout<<"================================"<<endl;
	cout<<"Enter present days: ";
	cin>>day;
	
	percentage = day/total_day*100;
	
	cout<<"Percentage is: "<<percentage<<"\n";
	
	if(percentage >=75){
		cout<<"You are Eligibal";
	}
	else{
		cout<<"Your are Not Eligibal";
	}
	
}

// 4 Function
void numbercheck()
{
	int num;
	
	
	cout<<"Enter Your Number: ";
	cin>>num;
	
	if(num % 2 ==0){
		cout<<num<<" is Even \n";
	}
	else{
		cout<<num<<" is ODD \n";
	}
	
	if(num>=1){
		cout<<num<<" is Positive \n";
	}
	else if(num == 0){
		cout<<"not posive and not negative";
	}
	else{
		cout<<num<<" is Negative \n";
	}
	
	bool isprime=true;
	
	for(int i = 2 ; i<num ; i++){
		if(num % i == 0)
		{
			isprime=false;
			break;
		}
	}
	if(isprime==true){
	
		cout<<num<<" is prime \n";
		}
	else{
			cout<<num<<" is not prime \n";
		}
}

// 5 function

void table()
{
	int num;
	int range;
	
	cout<<"Enter Number: ";
	cin>>num;
	cout<<"Enter Range: "; 
	cin>>range;
	
	for(int i =1; i<=range ; i++ ){
		cout<<num<<"x"<<i<<"="<<num*i<<"\n";
	}
	cout<<"while loop \n";
	int i=1;
	while(i<=range){
		cout<<num<<"x"<<i<<"="<<num*i<<"\n";
		i++;
	}
}

//6. Pattern Practice function
void pattren(){
	int num;
	cout<<"Enter range: ";
	cin>>num;
	for(int i=1 ; i <= num; i++){
		for(int j=1 ; j<=i; j++){
			cout<<j;
		}
		cout<<endl;
	}
	
	
	
}


int main()
{
//output structure ha yaha
	cout<<"================================"<<endl;
	cout<<"    STUDENT PRACTICE SYSTEM     "<<endl;
	cout<<"================================"<<endl;
	
	cout<<"1. Student Information"<<endl;
	cout<<"2. Marks & Grade Calculator"<<endl;
	cout<<"3. Attendance Checker"<<endl;
	cout<<"4. Number Checker"<<endl;
	cout<<"5. Multiplication Table"<<endl;
	cout<<"6. Pattern Practice"<<endl;
	cout<<"7. Exit"<<endl<<endl<<endl;
	
//user input
	int input;
	cout<<"Enter your choice: ";
	cin>>input;
	cout<<"\n";
	
	
// 1 ka execution
	
	
	if(input==1){
		studentinformation();

	}
	
// 2 ki exicution

	else if(input==2){
		markscalculate();
	}
	
// 3 ka execution
	else if(input==3){
		attendence();
	}

// 4 ka execution
	else if(input==4){
		numbercheck();
	}
// 5 ka execution
	else if(input==5){
		table();
	}
// 6 ka execution
	else if(input==6)
{
	pattren();
}
// 7 ka execution
	switch(input){
	
		case 7:
			cout<<"Exiting Student Practice System... \n";
			cout<<"Thank you!";
	}

	return 0;
}