#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=nullptr;
    }
};
class LinkedList{
    public: 
    Node* head;
    LinkedList(){
        head=nullptr;
    }
    void append(int data){
        Node* newNode=new Node(data);
        if(head==nullptr){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    void printList(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"nullptr"<<endl;
    }
};
int main(){
    LinkedList obj;
    obj.append(10);
    obj.append(20);
    obj.append(30);
    cout<<"Linkedlist list: ";
    obj.printList();
}