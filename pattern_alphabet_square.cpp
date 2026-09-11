#include <iostream>
using namespace std;

// Program to print a square grid of continuous alphabets (A to I)
// Output:
// ABC
// DEF
// GHI

int main()
{
	int m = 3;
	char abc = 'A';

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << abc;
			abc++;
		}
		cout << endl;
	}

	return 0;
}
