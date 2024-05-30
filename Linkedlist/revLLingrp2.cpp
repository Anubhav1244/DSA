#include<iostream>
using   namespace std;

class node{
    public:
    int data;
    node* next;

    node()
    {
        this->next=NULL;

    }
    node(int val)
    {
        this->data=val;
        this->next=NULL;
    }
};
int length(node*head)
{
    node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        
        temp=temp->next;
        count++;
    }
    return count;

}
void insertAtfront(int data,node* &head)
{
    if (head==NULL)
    
    {
        node*temp=new node(data);
        head=temp;
        return;
    }
    else
    {
        node*temp=new node(data);
        temp->next=head;
        head=temp;
    }
    
   
}
void printll(node*head)
{
    node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
       
    }
   cout<<endl;

}
void reverselinkedlist(node* &head)
{
    node*curr=head;
    node*prev=NULL;
    
    while(curr!=NULL)
    {
        node*nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    head=prev;
}
int main()
{
    node*head=NULL;
    insertAtfront(10,head);
    insertAtfront(20,head);
    insertAtfront(30,head);
    insertAtfront(40,head);
    
    reverselinkedlist(head);
    printll(head);
    return 0;
} 