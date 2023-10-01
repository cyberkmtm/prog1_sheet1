#include <iostream>
using namespace std;

int main() {
for(int top=1;top<=5;top++){
    for(int top_space=0;top_space<top;top_space++){
        cout<<"   ";
    }
    for(int j=5;j>=top+1;j--){
        cout<<j<<"  ";
    }
     for(int k=top;k<=5;k++){
        cout<<k<<"  ";
    }
    cout<<endl;
}
// bottom
for(int bottom=5;bottom>1;bottom--){
    for(int bottom_space=bottom;bottom_space>1;bottom_space--){
        cout<<"   ";
    }
    for(int j=5;j>=bottom-1;j--){
        cout<<j<<"  ";
    }
     for(int k=bottom;k<=5;k++){
        cout<<k<<"  ";
    }
    cout<<endl;
}

return 0;
}