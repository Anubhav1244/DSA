#include <iostream>
#include<map>
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
// int main() {             //this is the method 1 to check loop in linkedlist
//     node*head=NULL;
//     insertAtfront(1,head);
//     insertAtfront(2,head);
//     insertAtfront(3,head);
//     insertAtfront(4,head);

//     map<node*,bool>mp;
//     node*temp=head;
//     while(temp!=NULL)
//     {
//         if(mp[temp]==false)
//         {
//             mp[temp]=true;

//         }
//         else
//         {
//             cout<<"loop is present";
//         }
//         temp=temp->next;
//     }
//     cout<<"loop is not present";
    
//     return 0;
// }
void hascycle(node* &head)
{
    node*slow=head;
    node*fast=head;

    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast= fast->next;
            slow=slow->next;

            if(fast==slow)
            {
                cout<<"loop is exist";
                return;
            }
        }
        
        
    }
    cout<<"loop is not exist";

}
int main()
{
    node*head=NULL;
    insertAtfront(1,head);
    insertAtfront(2,head);
    insertAtfront(3,head);
    insertAtfront(4,head);

    hascycle(head);
}