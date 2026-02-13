#include<iostream>
using namespace std;
bool Palindrome(int n){
    int rev=0;
    int dup=n;
    while(n>0){
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    cout<<rev<<endl;
    if(dup==rev){
        return true;
    }else{
        return false;
    }

}
int main(){
    int number=4554;
    if(Palindrome(number)){
        cout<<"Is a palindrome";
    }else{
        cout<<"Not a palindrome";
    }
}