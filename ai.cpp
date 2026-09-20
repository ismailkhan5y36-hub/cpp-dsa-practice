#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (half-height): ";
    cin >> n;

    // 1. Upper half of the butterfly
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Middle spaces
        for (int j = 1; j <= 2 * n - 2 * i; j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}