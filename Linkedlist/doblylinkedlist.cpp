#include<iostream>

using namespace std;

class node{
     public:
        int data;
        node*left;
        node*right;
    
        node()
        {
            this->left=NULL;
            this->right=NULL;
        }
        node(int val)
        {
            this->data=val;
            this->left=NULL;
            this->right=NULL;
        }
};
void printdll(node* head)
{
    node*curr=head;
    while(curr!=NULL)
    {
        
        cout<<curr->data<<" ";
        curr=curr->right;
    }

    
}
int  length(node*head)
{
    node*curr=head;
    int count=0;
    while(curr!=NULL)
    {
       
        curr=curr->right;
        count++;
    }
    return count;
}

void insertfromhead(node* &head,int data)
{
    if(head==NULL)
    {
        node*temp=new node(data);
        head=temp;
        return;
    }
    node *temp=new node(data);
    temp->right=head;
    head->left=temp;
    head=temp;

}
void insertfromtail(node* head,int data)
{
    node*temp=new node(data);
    node*curr=head;
    while(curr->right!=NULL)
    {
        curr=curr->right;
    }
    curr->right=temp;
    temp->left=curr;
    

}
void insertAtpos(node *&head,int data,int pos)
{
    node* temp=new node(data);
    int len=length(head);
    if(pos==1)
    {
        insertfromhead(head,data);
        return;
    }
    if(pos==len+1)
    {
        insertfromtail(head,data);
        return;
    }
    node*curr=head;
    
    while(pos!=1)
    {
        
        curr=curr->right;
        pos--;
    }
    curr->left->right=temp;
    temp->left=curr->left;
    temp->right=curr;
    curr->left=temp;
}
void deletionfromhead(node* &head)
{
    if (head==NULL)
    {
        cout<<"your head is empty";
        return;
    }
    node*next=head->right;
    head->right=NULL;
    next->left=NULL;
    delete head;
    head=next;

    
}
void deletionfromtail(node* &head)
{
    if (head==NULL)
    {
        cout<<"your head is empty";
        return;
    }
    node *curr=head;

    while (curr->right!=NULL)
    {
        curr=curr->right;
    }
    node *prev=curr->left;
    prev->right=NULL;
    curr->left=NULL;
    delete curr;
    
}
int main()
{
    node* head=NULL;
    insertfromhead(head,10);
    insertfromtail(head,20);
    insertfromhead(head,30);
    insertfromhead(head,40);
    insertAtpos(head,50,2);

    // deletionfromhead(head);
    deletionfromtail(head);

    printdll(head);
}