#include <iostream>
using namespace std;

int main() {
    int num;

   cout << "Enter the number for the multiplication table: ";
   cin >> num;

   cout << "Multiplication Table for " << num << ":" <<endl;

    for (int i = 1; i <= 12; i++) {
       cout << num << " * " << i << " = " << (num * i) <<endl;
    }

    return 0;
}