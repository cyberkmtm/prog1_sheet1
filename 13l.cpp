#include <iostream>
#include <string>
using namespace std;

int main() {
    string pattern = "a b c d e f";
    int n = pattern.length();

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }

        for (int k = i; k < n; k++) {
            cout << pattern[k] << " ";
        }

        cout << "\n";
    }

    return 0;
}














// #include <iostream>
// using namespace std;

// void printPattern(int n) {
//     for (int i = rows; i <= n; i++) {
//         for (int j = 1; j < i; j++) {
//             cout << "  ";
//         }
//         for (int k = i; k <= n; k++) {
//             cout << k << " ";
//             cout<<((char) tolower(j+64));
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int i,j,rows;
//     char alphabet = 'a';
    
//     cout << "Enter the number of rows:" << endl;
//     cin>>rows;
//     cout<<"\n";
//     cout<<"Here, your pattern\n";
//     int n = 5;
//     printPattern(n);
//     return 0;
// }