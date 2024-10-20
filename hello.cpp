#include<bits/stdc++.h>
using namespace std;

void pattern2(int n) {
    // Upper half including the middle row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cout << "Enter rows: ";
    cin >> rows;

    pattern2(rows);
    return 0;
}
