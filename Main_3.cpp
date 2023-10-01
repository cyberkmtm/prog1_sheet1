#include <iostream>
using namespace std;

int main() {
    int num;
    while (true) {
        cout << "Enter a number: ";
        cin >> num;
        
        if (num >= 0) {
            continue; 
        } else {
         
            cout << "Now you have entered a negative number" << endl;
            break;  
        }
    }

    return 0;
}