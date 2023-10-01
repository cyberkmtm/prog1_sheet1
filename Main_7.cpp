#include <iostream> 
#include<cmath>
using namespace std;

 
int main() {
    char choice;

    do {
        double num;

       cout << "Enter a number: ";
       cin >> num;

        double squareRoot = sqrt(num);
       cout << "Square root: " << squareRoot <<endl;

       cout << "Do you want to continue? (y/n): ";
       cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}


 

 
 