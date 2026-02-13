#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n){
    int temp[n];
    for(int i=0;i<n;i++){
        int minindex=0;
        for(int j=0;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        temp[i]=arr[minindex];
        arr[minindex]=INT_MAX;
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {64,10,12,22,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
}