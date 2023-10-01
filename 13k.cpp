#include <iostream>

using namespace std;

int main()
{
    int i,j,rows;
    char alphabet='a';
    cout << "Enter the number of rows" << endl;
    cin>>rows;
    cout << "\nHere your pattern\n" << endl;
    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            cout<<alphabet++;
        }
        cout<<"\n";
    }
  
    return 0;
}