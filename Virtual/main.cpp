#include <iostream>
using namespace std;

int main() {
    // print 10 rows of decreasing asterisks
    for (int i = 1; i <= 10; i++) {
        for (int j = 10; j >= i; j--) {
            cout << "*";
        }
        cout << endl;
    }

    // print 10 rows of increasing asterisks
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
