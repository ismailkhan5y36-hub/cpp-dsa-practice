#include <iostream>
using namespace std;

// Function to calculate sum up to n
int sumof(int n) {
	int sum = 0;
	for(int i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}

// Function to calculate factorial of n
int facto(int n) {
	int fact = 1;
	for(int i = 1; i <= n; i++) {
		fact *= i;
	} 
	return fact;
}

int main()
{
	cout << "Sum up to 8: " << sumof(8) << endl;
	cout << "Sum up to 10: " << sumof(10) << endl;
	cout << "Sum up to 5: " << sumof(5) << endl;
	cout << "Factorial of 4: " << facto(4) << endl;
	
	return 0;
}
