#include <iostream>
using namespace std;

// Function to calculate the sum of digits of an integer
int ans(int sums) {
	int digitsum = 0;
	while(sums > 0) {
		int lastdigit = sums % 10;
		sums /= 10;
		digitsum += lastdigit;
	}
	return digitsum;
}

int main()
{
	cout << "Sum of digits (311): " << ans(311) << endl;
	return 0;
}
