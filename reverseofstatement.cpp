#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string result(string s){
    string reverseWords= "";
    string temp= "";
    int left=0;
    while(left<=s.length()-1){
        char ch=s[left];
        if(ch!=' ')
        temp+=ch;
        else if(ch==' '){
            if(reverseWords != "")
            reverseWords=temp+" "+reverseWords;
            else
            reverseWords=temp;
        temp= "";
        }
        left++;
    }
    if(temp!=""){
        if(reverseWords != "")
            reverseWords=temp+" "+reverseWords;
        else
            reverseWords=temp;
    }
    return reverseWords;
}
int main(){
    string st="Interview Prepration DSA";
    cout<<"Before reversing words: "<<endl;
    cout<<st<<endl;
    cout<<"After reversing string: "<<endl;
    cout<<result(st);
    return 0;
}
