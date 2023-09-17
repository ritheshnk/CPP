#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;  //pointing to next node

    node(int val)
    {
        data=val;
        next=NULL;

    }
};

void insertAtFront(node* &head, int val)
{
    node* n=new node(val);
    n->next= head;
    head=n;
}


void insertAtEnd(node* &head,int val)
{
    node* n=new node(val);
    node* temp=head;

    if(head == NULL)
    {
        head=n;
        return;
    }

    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}

bool search(node* head,int key)
{
    node* temp=head;
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp=temp->next;
    }

    return false;
}

void display(node* head)
{
    node* temp=head;
    while(temp !=NULL)
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
    insertAtFront(head,5);
    display(head);
    std::cout<<search(head,2);

}
