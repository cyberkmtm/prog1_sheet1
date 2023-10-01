#include<iostream>
using namespace std;

void loki(int n)
{
    int i = n, j = 0, k = 0;
    while (i > 0) {
 
        while (k < (n - i)) {
            cout << "  ";
            k++;
        }
 
        k = 0;
        while (j < i) {
            cout << "* ";
            j++;
        }
 
        j = 0;
        i--;
        cout << endl;
    }
}
 
int main()
{
    int n = 7;
 
    loki(n);
    return 0;
}