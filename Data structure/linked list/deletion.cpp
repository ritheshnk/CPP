#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }

};

void insertAtEnd(node* &head,int val)
{
    node* n= new node(val);
    node* temp=head;

    if(head==NULL)
    {
        head=n;
        return;
    }

    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next-n;

}

void insertionAtFront(node* &head,int val)
{
    node* n=new node(val);
    if(head== NULL)
    {
        head=n;
    }

    n->next=head;
    head=n;
}

void deletion(node* &head,int val)
{
    node* temp=head;
    if(head==NULL)
    {
        return;
    }

    while(temp->next->data==val){
      temp=temp->next;
    }

      delete temp->next;
      temp->next=temp->next->next;
}
void display(node* head)
{
    node* temp=head;
    while(temp->next!= NULL)
    {
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    std::cout<<endl;
}
int main()
{
    node* head=NULL;

    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    display(head);
    deletion(head,3);
    display(head);
 
}