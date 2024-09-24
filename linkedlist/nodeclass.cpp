#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;

    //constructor
    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    node a(10);
    node b(20);
    node c(30);
    node d(40);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    cout << &a <<endl;
    cout << a.val<<endl;
    cout<<(a.next)->val<<endl;
    // cout<<(b.next)->val<<endl;
    cout<<((a.next)->next)->val<<endl;//printing value of C withiout using b
    cout<<((a.next)->next->next)->val;//printing value of D using A 
}