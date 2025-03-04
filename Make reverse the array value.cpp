#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Total Numbers:";
    cin>>n;

    int a[n];
    int b[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter Your"<<i+1<<"Number Array Value:";
        cin>>a[i];
    }
    cout<<"Your initialized Array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<"Your Reverse value is:"<<endl;

    for(int i=n-1,j=0; i>=0,j<n; i--,j++)
    {
         b[j]=a[i];

    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }


    return 0;
}
