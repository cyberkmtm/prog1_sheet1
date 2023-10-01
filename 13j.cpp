#include <iostream>

using namespace std;

int main()
{
    
    int i,j,rows;
    char alphabet = 'a';
    
    cout << "Enter the number of rows:" << endl;
    cin>>rows;
    cout<<"\n";
    cout<<"Here, your pattern\n";

    for(i=rows; i>=1; i--){
        for(j=1; j<=i; j++){
        cout<<((char) tolower(j+64));
    }
    cout<<"\n";
    }
    
    return 0;
}