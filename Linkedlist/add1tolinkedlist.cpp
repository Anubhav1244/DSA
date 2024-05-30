#include<iostream>
using namespace std;

class node{

    public:
        int data;
        node*next;

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
void insertAttail(int data,node* &head)
{
     if (head==NULL)
    {
        node*temp=new node(data);
        head=temp;
    }
    else{
        node*temp=new node(data);
        node* ptr=head;
        while(ptr->next!=NULL)  //whenever we want to stick on last node then we declare the ptr->next!=null    ;
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
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
void add1(node*&head)
{
    reverselinkedlist(head);
    node*curr=head;
    int carry= 1;
    while(carry!=0)
    {
        int res=curr->data+carry;
        carry=res/10;
        int digit=res%10;

        curr->data=digit;
        if(carry==0)
        {
            reverselinkedlist(head);
            return;
        }
        if(curr->next==NULL)
        {
            insertAttail(carry,head);
            reverselinkedlist(head);
            return;
        }
        curr=curr->next;

    }
    
}
int main()
{
    node*head=NULL;
    insertAttail(9,head);
    insertAttail(9,head);
    // insertAttail(1,head);
    // insertAttail(2,head);

    add1(head);
    printll(head);
}