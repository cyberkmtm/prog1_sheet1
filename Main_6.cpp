#include <iostream>
using namespace std;
int main() {
    int num;

   cout << "Enter the value of n: ";
   cin >> num;

    double sum = 0.0;

    for (int i = 1; i <= num; i++) {
        sum += 1.0 / i;
    }

   cout << "Sum of reciprocals: " << sum <<endl;

    return 0;
}