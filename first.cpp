#include<iostream>
#include<algorithm>
using namespace std;
int sortArr(int *arr,int n){
    sort(arr,arr+n);
    return arr[n-1];
}
int main(){
    int arr[]={2,5,1,3,0};
    int n=5;
    cout<<"The lagest element in the array is: "<<sortArr(arr,n)<<endl;
}