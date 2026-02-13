#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int num;
    cin>>num;
    for(int i=0;i<5;i++){
        if(array[i]==num){
            continue;
        }else{
            cout<<array[i]<<" ";
        }
    }
    // for(int i=0;i<4;i++){
    //     cout<<array[i]<<" ";
    // }
}