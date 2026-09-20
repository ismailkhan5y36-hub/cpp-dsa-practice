#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int num) {
	int fact = 1;
	for(int i = 1; i <= num; i++) {
		fact *= i;
	}
	return fact;
}

// Binomial Coefficient: nCr = n! / (r! * (n - r)!)
int main()
{
	int n = 6, b = 3;
	int fact_n = factorial(n);
	int fact_b = factorial(b);
	int rest = n - b;
	int ret = factorial(rest);
	
	int answer = fact_n / (fact_b * ret);
	cout << "Binomial Coefficient (6C3): " << answer << endl;
	
	return 0;
}
