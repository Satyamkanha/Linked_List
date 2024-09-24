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
//printing the linked list recursively
void recursion(node* head){
    if(head==NULL){
        return;
    }
    cout<<head->val<<" ";
    recursion(head->next);
}
int main(){
    node* a=new node(10);
    node* b=new node(20);
    node* c=new node(30);
    node* d=new node(40);
    node* e=new node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    recursion(a);
}