#include <iostream>
using namespace std;
int main() {
    int num;

    cout << "Enter the value of num: ";
    cin >> num;

    cout << "Numbers in reverse order:" << endl;
    for (int i = num; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}