#include <iostream>
using namespace std;

// Program to print a character triangle pattern where each row repeats the current character
// Output:
// A
// B B
// C C C
// D D D D

int main()
{
	int p = 15;
	char lk = 'A';
	
	for(int i = 0; i < p; i++) {
		for(int j = 0; j < i + 1; j++) {
			cout << lk << " ";
		}
		cout << endl;
		lk++;
	}
	
	return 0;
}
