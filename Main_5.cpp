#include <iostream>
using namespace std;
int main() {
    int start, end;

    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;

    int sum = 0;
    int difference = 0;
    int product = 1;

    for (int i = start; i <= end; i++) {
        sum += i;
        difference -= i;
        product *= i;
    }
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;

    return 0;
}