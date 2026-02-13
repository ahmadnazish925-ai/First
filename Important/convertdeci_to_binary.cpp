#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    int n,b;
    cout<<"Enter a number you want to convert \n";
    cin>>n;
    cout<<"Binary form of this number is \n";
    while(n>0){
        b=n%2;
        st.push(b);
        n/=2;
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}