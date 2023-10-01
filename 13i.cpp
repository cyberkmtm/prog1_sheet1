#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"\nEnter the value:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\n";
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(j=n;j>n-i;j--)
        {
            cout<<" "<<j;
        }
        for(j=n-i+2;j<n+1;j++)
        {
            cout<<" "<<j;
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<"\n";
        for(j=1;j<=i;j++)
        {
            cout<<"  ";
        }
        for(j=n;j>i;j--)
        {
            cout<<" "<<j;
        }
        for(j=i+2;j<=n;j++)
        {
            cout<<" "<<j;
        }

    }
    return 0;
}