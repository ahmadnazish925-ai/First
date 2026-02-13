//take a arrayinput from user and convert into a linklist
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=nullptr;
    }
};
void insertatTail(Node* &head,int arr[],int size){
    for(int i=0;i<size;i++){
        if(head==NULL){
            head=new Node(arr[i]);
        }
        else{
            Node* tail=head;
            while(tail->next!=NULL){
                tail=tail->next;
            }
            tail->next=new Node(arr[i]);
        }
    }
}
void insertathead(Node* &head,int arr[],int size){
    for(int i=0;i<size;i++){
    if(head==NULL){
        head=new Node(arr[i]);
    }else{
        Node* temp;
        temp=new Node(arr[i]);
        temp->next=head;
        head=temp;
    }
}
}
void printlinklist(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int array[size];
    cout<<"Enter the arrray Element :"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"Now here is array converted into linklist"<<endl;
    Node* head;
    head=nullptr;
    insertatTail(head,array,size);
    printlinklist(head);
    cout<<endl;
    cout<<"Now enter another array which you add at the begning"<<endl;
    int array2[size];
    for(int i=0;i<size;i++){
        cin>>array2[i];
    }
    cout<<"Here is final result"<<endl;
    insertathead(head,array2,size);
    printlinklist(head);
}