#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={10,5,16,18,19,2};
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(max<arr[i+1]){
            max=arr[i+1];
        }
    }
    cout<<"Max element is: "<<max;

}