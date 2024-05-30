#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node()
    {
        this->next=NULL;

    }   
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};
node* middlelinkedlist(node* &head)
{
    node*fast=head;
    node*slow=head;
    while(fast->next!=NULL)
    {
        fast=fast->next;
        if(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}
void insertAtfront(int data,node *&head)
{
    if(head==NULL)
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
void checkpalindrome(node*&head,node*&head2)
{
    if(head!=NULL && head2!=NULL)
    {
        if(head->data==head2->data)
        {
            head=head->next;
            head2=head2->next;
            checkpalindrome(head,head2);
        }
        else
        {
            cout<<"Not a palindrome";
            return;
        }
        
    }
    else
    {
        cout<<"Palindrome";
        return;
    }
}
void printll(node*head)
{
    while(head!=NULL)
    {
        std::cout<<head->data<<" ";
        head=head->next;
    }
}
node* reverse(node*&head2)
{
    node*prev=NULL;
    node*curr=head2;
    while(curr!=NULL)
    {
        node*nextnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
        
    }
    return prev;

}
int main() {
    node*head=NULL;
    insertAtfront(1,head);
    insertAtfront(2,head);
    insertAtfront(1,head);
   
    node*midnode=middlelinkedlist(head);
    cout<<midnode->data<<endl;

    node*head2=midnode->next;
    midnode->next=NULL;
    cout<<endl;
    head2=reverse(head2);
    cout<<endl;
    checkpalindrome(head,head2);




    return 0;
}
