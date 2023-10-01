#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter the value of n: ";
    cin >> num;

    int factorial = 1;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << num << ": " << factorial << endl;

    return 0;
}