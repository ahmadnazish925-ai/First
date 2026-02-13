#include<iostream>
#include<algorithm>
using namespace std;
bool Anagrams(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i])
        return false;
    }
    return true;
}
int main(){
    string str1="INTEGER";
    string str2="TEGERNI";
    if(Anagrams(str1,str2)){
        cout<<"Yes it it anagrams";
    }else{
        cout<<"No not a anagrams";
    }
    return 0;
}