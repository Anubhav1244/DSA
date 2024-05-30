//delete N nodes from M number of nodes

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
void insertAttail(int data,node *&head)
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
void del(node*&curr,int n)
{
    node*temp=curr;
    while(n-- && temp!=NULL)
    {
        temp=temp->next;
    }
    curr->next=temp->next;
}
void delete_n_node_from_m_node(node* &head,int m,int n)
{
    int count=1;
    node*temp=head;
    node*curr=head;
    while(curr!=NULL)
    {
        curr=curr->next;
        count++;
        if(count==m)
        {
            count=m;
            cout<<curr->data<<endl;
            del(curr,n);
        }
    }


}
void printll(node*head)
{
    cout<< head->data;
    cout<<endl;
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
    insertAttail(9,head);
    insertAttail(1,head);
    insertAttail(3,head);
    insertAttail(5,head);
    insertAttail(9,head);
    insertAttail(4,head);
    insertAttail(10,head);

    delete_n_node_from_m_node(head,2,1);
    printll(head);

}