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
    node(int val)
    {
        this->data=val;
        this->next=NULL;
    }
};
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
void middlelinkedlist(node*head)
{
    node*slow=head;
    node*fast=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        

    }
    cout<<slow->data;
}
int main() {

    node*head=NULL;
    insertAtfront(1,head);
    insertAtfront(2,head);
    insertAtfront(3,head);
    insertAtfront(4,head);
    // insertAtfront(5,head);
    // insertAtfront(6,head);
    middlelinkedlist(head);
    return 0;
}