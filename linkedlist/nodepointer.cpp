#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    //creating constructor
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main(){
    //will now create objects
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    // cout<<a->val<<" ";
    // cout<<b->val<<" ";
    // cout<<c->val<<" ";
    // cout<<d->val<<" "; PRINTING WITHOUT USING LOOP
    // node* temp = a;
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";//PRINTING USING WHILE LOOP
    //     temp=temp->next;
    // }
    display(a);//created a function to print the linked list
}