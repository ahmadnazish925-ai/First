#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int secondlargest(int arr[],int n){
    int large=INT_MIN;
    int secondlarge=INT_MIN;
    if(n<2)
    return -1;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            secondlarge=large;
            large=arr[i];
            cout<<large<<" "<<secondlarge<<endl;
        }
        else if(arr[i]>secondlarge && arr[i]!=large){
            secondlarge=arr[i];
            cout<<large<<" "<<secondlarge<<endl;
        }
    }
    return secondlarge;
}
int main(){
    int arr[]={2,5,1,3,0};
    int n=5;
    cout<<"Second largest element is "<<secondlargest(arr,n);
}