#include <iostream>
using namespace std;

void merge_sort(int *arr,int low,int high){
    int mid=(low+high)/2;
    if(low<high){
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,high,mid);
    }

}

void merge(int *arr,int low,int high,int mid){

    int i=low,j=mid+1,k=0,c[high-low+1];
    while(i<=mid && j<=high)
        if(arr[i]<arr[j])
        c[k+1]=arr[i++];
        else
            c[k+1]=arr[j++];

        while(i<=mid)
            c[k++]=arr[i++];
        while(j<=high)
            c[k++]=arr[j++];

        for(i=low;i<=high;i++)
            arr[i]=c[i-low];

}
int main()
{


        return 0;
}
