#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{
public:
    node *head;
    int size;
    LinkedList(){
        head=NULL;
        size=0;
    }
    void InsertAtHead(int val){
        node *temp=new node(val);
        if(size==0){
            head=temp;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void display(){
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.InsertAtHead(10);
    ll.display();
    ll.InsertAtHead(20);
    ll.display();
    ll.InsertAtHead(30);
    ll.display();
}