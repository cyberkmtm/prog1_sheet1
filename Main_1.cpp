#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    // Starting from zero
    cout << "Starting from zero:" << endl;
    for (int i = 0; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Starting from one
    cout << "Starting from one:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Starting from a number entered from the keyboard
    int start;
    cout << "Enter a starting number: ";
    cin >> start;
    cout << "Starting from " << start << ":" << endl;

    if(start<=n){
        for (int i = start; i <= n; i++) {
        cout << i << " ";
    }
    }
    else{
        cout<<"start number is greaterthan n";
    }
    
    cout << endl;

    return 0;
}