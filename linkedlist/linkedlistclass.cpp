#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class linkedlist
{
public:
    node *head;
    node *tail;
    int size;
    linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }
    void InsertAtHead(int val)
    {
        node *temp = new node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display()
    {
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    linkedlist LL;
    LL.InsertAtHead(10);
    LL.display();
}