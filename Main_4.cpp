#include <iostream>
using namespace std;

int main() {
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c << char(c + 32) << " ";
    }
    cout << endl;

    return 0;
}