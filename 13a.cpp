#include <iostream>
using namespace std;

int main() {
  int size = 4;
  for (int i = 0; i < size; i++) {

    for (int j = 0; j < size - i - 1; j++) {
      cout << " ";
    }
    
    for (int k = 0; k < 2 * i + 1; k++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}
