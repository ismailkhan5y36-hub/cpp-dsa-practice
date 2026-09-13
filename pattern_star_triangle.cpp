#include <iostream>
using namespace std;

// Program to print a right-angled star triangle pattern
// Output:
// *
// **
// ***
// ****

int main()
{
	int m = 10;
	
	for(int i = 0; m > i; i++) {
		for(int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
