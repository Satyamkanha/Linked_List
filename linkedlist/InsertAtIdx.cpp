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
    node* tail;
    node* head;
    int size;
    LinkedList(){
        tail=head=NULL;
        size=0;
    }
    void insertAtHead(int val){
        node *temp=new node(val);
        if (size==0) head=tail=temp;
        else{
            temp->next=head;
            temp=head;
        }
        size++;
    }
    void insertAtTail(int val){
        node *temp=new node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtIdx(int index,int val){
        if(index<0 || index>size) cout <<"Invail Input";
        else if(index==0) insertAtHead(val);
        else if(index==size) insertAtTail(val);
        else{
            node *t=new node(val);
            node *temp=head;
            for(int i=1;i<index-i;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }
    void display(){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.insertAtHead(10);
    ll.display();
    ll.insertAtTail(20);
    ll.display();
    ll.insertAtTail(30);
    ll.display();
    ll.insertAtTail(40);
    ll.display();
    ll.insertAtIdx(3,50);
    ll.display();
}