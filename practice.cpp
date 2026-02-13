#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
void insertatbegning(Node* &head,int data){
    // Node* head;
    // head=nullptr;
    if(head==NULL){
        head=new Node(data);
    }else{
        Node* temp;
        temp=new Node(data);
        temp->next=head;
        head=temp;
    }
}
void insertatTail(Node* &head,int data){
    if(head==NULL){
        head=new Node(data);
    }
    else{
        Node* Tail=head;
        while(Tail->next!=NULL){
            Tail=Tail->next;
        }
        Tail->next=new Node(data);
    }
}
//2nd method for insert at tail
void InsertatTail(Node* &head,int data){
    Node* tail= nullptr;
    if(head==NULL){
        head=new Node(data);
        tail=head;
    }
    else{
        tail->next=new Node(data);
        tail=tail->next;
    }
}
void print(Node* head){ 
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
int main(){
    Node* head;
    head=nullptr;
    // insertatbegning(head,10);
    // insertatbegning(head,20);
    // insertatbegning(head,30);
    // insertatbegning(head,40);
    // insertatTail(head,10);
    // insertatTail(head,20);
    // insertatTail(head,30);
    // insertatTail(head,40);
    // print(head);
    // insertatTail(head,70);
    // print(head);
//implementing at tail by 2nd method

    // InsertatTail(head,30);
    // InsertatTail(head,70);
    // InsertatTail(head,100);
    // print(head);
    // InsertatTail(head,70);
    // print(head);

}