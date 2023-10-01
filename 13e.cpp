#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            cout << "  ";
        }
        for (int k = 1; k <= n - i + 1; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printPattern(n);
    return 0;
}