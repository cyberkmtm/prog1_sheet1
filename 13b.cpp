 #include <iostream>
using namespace std;

int main() {

    int raw;

    cout << "Enter number of rows: ";
    cin >> raw;

    for(int i = 1; i <= raw; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}