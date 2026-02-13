#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v={2,5,1,3,0};
    sort(v.begin(),v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl<<v[v.size()-1];
}

