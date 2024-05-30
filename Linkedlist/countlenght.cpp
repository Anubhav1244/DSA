#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node() {
        
        
        this->next=NULL;
    }

    Node(int val) {
        this->data=val;
        this->next=NULL;
    }
};
void countlength(Node* head) {
    Node* temp=head;
    int count=0;
    while(temp!=NULL) {
        count++;
        temp=temp->next;
    }
    cout<<count;
}
int main()
{
    Node a;
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *fourth=new Node(40);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    Node* head=first;
    countlength(head);

    return 0;
}