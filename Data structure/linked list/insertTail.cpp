#include<iostream>
using namespace std;

class node{
    public:
        int data; 
        node* next;  //pointing to next node

        node(int val){
            data=val;
            next=NULL; 
        }
        
};

void insertAtEnd(node* &head, int val)  //node* &head we passing reference see book
{
    node* n=new node(val);
    node* temp=head;  //temporary pointer head is same

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

void display(node* head)
{
    node* temp=head;

    while(temp != NULL)
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

    
}