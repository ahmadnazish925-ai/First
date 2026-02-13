#include<bits/stdc++.h>
using namespace std;

void nextgreaterElement(int nums[],int n,int nge[]){
    stack<int> st;
    for(int i=2*n-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums[i%n])
        st.pop();
        if(i<n){
            if(!st.empty())
            nge[i]=st.top();
            else
            nge[i]=-1;
        }
        st.push(nums[i%n]);
    }
}
int main(){
    int nums[]={5,7,1,2,6,0};
    int n=sizeof(nums) / sizeof(nums[0]);
    int nge[n];
    nextgreaterElement(nums,n,nge);
    cout<<"The next greater element is "<<endl;
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";

    }
    return 0;

}