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

void insertAtbetween(int data,node* &head,int pos)
{
    int len=length(head);

    if(pos> len+1)
    {
        cout<<"cannot perform this opertation";
        return;
    }
    else if(pos==1)
    {
        insertAtfront(data,head);
    }
    else if(pos==len+1)
    {
        insertAttail(data,head);
    }
    else{
        node *prev=NULL;
        node*curr=head;
        node*temp=new node(data);
        while(pos!=1)
        {
            prev=curr;
            curr=curr->next;
            pos--;
        }
        prev->next=temp;
        temp->next=curr;
    }

   
}
void deletionfromhead(node* &head)
{
    if(head==NULL)
    {
        cout<<"head is empty";
        return;
    }
    node* nextnode=head->next;
    head->next=NULL;
    head=nextnode;
}
void deletefromtail(node* &head)
{
    if(head==NULL)
    {
        cout<<"head is empty";
        return;
    }
    node*temp=head;
    node*curr=temp;
    node*prev=NULL;
    while(curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;

    }
    prev->next=NULL;

}

void deletefrompos(node* &head,int pos)
{
    if(head==NULL)
    {
        cout<<"head is empty";
        return;
    }
    int len=length(head);
    if(pos==1)
    {
        deletionfromhead(head);
    }
    else if(pos==len+1)
    {
        deletefromtail(head);
    }
    else{
        node*curr=head;
        node*prev=NULL;
        while(pos!=1)
        {
            prev=curr;
            curr=curr->next;
            pos--;
        }
        node*nextnode=curr->next;
        prev->next=nextnode;
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

int main()
{
    node*head=NULL;
    insertAtfront(10,head);
    insertAttail(30,head);
    insertAtbetween(40,head,3);
    
    // deletionfromhead(head);
    // deletefromtail(head);
    // deletefromtail(head);
     printll(head);
    deletefrompos(head,2);
   printll(head);
    return 0;
}