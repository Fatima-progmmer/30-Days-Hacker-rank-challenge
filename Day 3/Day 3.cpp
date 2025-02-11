#include <iostream>
using namespace std;

int main() {
    int n;
    // Read the input integer
    cin >> n;

    // Check the conditions
    if (n % 2 != 0) {
        // n is odd
        cout << "Weird" << endl;
    } else {
        // n is even
        if (n >= 2 && n <= 5) {
            cout << "Not Weird" << endl;
        } else if (n >= 6 && n <= 20) {
            cout << "Weird" << endl;
        } else if (n > 20) {
            cout << "Not Weird" << endl;
        }
    }

    return 0;
}
