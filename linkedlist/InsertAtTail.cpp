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
    int size;
    LinkedList(){
        tail=NULL;
        size=0;
    }
    void InsertAtTail(int val){
        node *temp=new node(val);
        if(size==0){
            tail=NULL;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void display(){
        node* temp=tail;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.InsertAtTail(30);
    ll.display();
    ll.InsertAtTail(20);
    ll.display();
    ll.InsertAtTail(10);
    ll.display();
}