#include <iostream> 
using namespace std;

int main() {
    int size;
    int number;
    int maximum=0; 
    int minimum=0;  

   cout << "Enter the size of the list: ";
   cin >> size;

    for (int i = 1; i <= size; i++) {
       cout << "Enter number " << i << ": ";
       cin >> number; 
       
        if (i==1) {
             minimum = number;
             maximum = number;
        }
        if (number > maximum && number > minimum) {
             maximum = number;
        }
        if (number < minimum && number< maximum) {
            minimum = number;
        }
    }

   cout << "Maximum number: " << maximum <<endl;
   cout << "Minimum number: " << minimum <<endl;

    return 0;
}