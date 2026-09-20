#include <iostream>
using namespace std;

// ==========================================
// Project: Number Utility Toolkit (C++ CLI)
// Author: Ismail Khan
// ==========================================

// Function 1: Factorial Calculation
int factorial(int num) {
	int fact = 1;
	for (int i = 1; i <= num; i++) {
		fact *= i;
	}
	return fact;	
}

// Function 2: Check if a Number is Prime
bool prime(int num) {
	if (num <= 1) return false;
	bool isprime = true;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			isprime = false;
			break;	
		}
	}
	return isprime;
}

// Function 3: Sum of Digits of an Integer
int sumofdigit(int num) {
	int first = 0;
	while (num > 0) {
		int lastdigit = num % 10;
		num /= 10;
		first += lastdigit;
	}
	return first;
}

// Function 4: Print all Prime Numbers up to N
void isprimecheck(int num) {
	for (int i = 2; i <= num; i++) {
		if (prime(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
}

int main()
{
	int num_1;
	int num_2;
	int choice;

	cout << "=================================" << endl;
	cout << "--- Number Utility Toolkit ---" << endl;
	cout << "=================================" << endl;
	cout << "1. Calculate nCr (Combination)" << endl;
	cout << "2. Check if Prime" << endl;
	cout << "3. Calculate Sum of Digits" << endl;
	cout << "4. Print Primes up to N" << endl;
	cout << "---------------------------------" << endl;
	cout << "Enter Choice: ";
	cin >> choice;

	if (choice == 1) {
		cout << "Enter N: ";
		cin >> num_1;
		cout << "Enter R: ";
		cin >> num_2;	
		
		int fact_n = factorial(num_1);
		int fact_b = factorial(num_2);
		int rest = num_1 - num_2;
		int ret = factorial(rest);
		
		int answer = fact_n / (fact_b * ret);
		cout << "Result (nCr): " << answer << endl;		
	}
	else if (choice == 2) {
		cout << "Enter N: ";
		cin >> num_1;
		if (prime(num_1)) {
			cout << num_1 << " is prime" << endl;		
		}
		else {
			cout << num_1 << " is not prime" << endl;
		}		
	}
	else if (choice == 3) {
		cout << "Enter N: ";
		cin >> num_1;
		int sum = sumofdigit(num_1);
		cout << "Result (Sum of Digits): " << sum << endl;
	}
	else if (choice == 4) {
		cout << "Enter N: ";
		cin >> num_1;
		cout << "Primes up to " << num_1 << " are: ";
		isprimecheck(num_1);		
	}
	else {
		cout << "Invalid choice! Please select 1-4." << endl;
	}
	
	return 0;
}
