#include <iostream>
using namespace std;

// Program to print a reverse countdown number triangle pattern
// Output:
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

int main()
{
	int k = 6;

	for(int i = 0; i <= k; i++) {
		for(int h = i + 1; h > 0; h--) {
			cout << h << " ";
		}
		cout << endl;
	}
	
	return 0;
}
