#include <iostream>
using namespace std;
class node{//user defined data type
public:
    int val;
    node *next;
    node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class linkedlist{//user defined data structure
public:
    node *head;
    node *tail;
    int size;
    linkedlist(){
        head = tail = NULL;
        size = 0;
    }
    void InsertAtTail(int val){
        node *temp = new node(val);
        if (size == 0)
            head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void InsertAtHead(int val){
        node *temp=new node(val);
        if(size==0){
            head=tail=temp;
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
    linkedlist LL;
    LL.InsertAtTail(10);
    LL.InsertAtTail(20);
    LL.display();
    cout<<"Size of linked list: "<<LL.size<<endl;
    LL.display();
    LL.InsertAtHead(00);
    LL.display();
}