//Zac Schmunk - 10/10/2024
//Lab 06 p1

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter number of asterisks per side: ";
    cin >> n;

    if (n < 3) {
        cout << "Invalid input. Length must be greater than or equal to 3." << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << "  ";

        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
