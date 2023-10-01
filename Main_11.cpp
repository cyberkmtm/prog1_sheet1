#include <iostream>
using namespace std;

int main() {
    int num;

   cout << "Enter a positive integer number: ";
   cin >> num;

    int reversedNumber = 0;

    while (num > 0) {
        reversedNumber = reversedNumber * 10 + num % 10;
        num /= 10;
    }

   cout << "Reversed number: " << reversedNumber <<endl;

    return 0;
}