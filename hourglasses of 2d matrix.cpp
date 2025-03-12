#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[6][6];
    srand(time(0));
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            a[i][j]=rand()%10;
        }
    }

     for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cout<<a[i][j]<<"  ";

        }
        cout<<endl;
    }

    cout<<endl;
    int countsubmat=0;
    int sum=0;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]<<" "<<a[i][j+1]<<" "<<a[i][j+2]<<endl;
            cout<<"  "<<a[i+1][j+1]<<endl;
            cout<<a[i+2][j]<<" "<<a[i+2][j+1]<<" "<<a[i+2][j+2]<<endl;


            countsubmat++;
            sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            cout<<"subglass Sum:"<<sum<<endl;
            cout<<"------"<<endl;

        }
        cout<<endl;
    }
    cout<<"Total sub-matrix are:"<<countsubmat;




return 0;
}
