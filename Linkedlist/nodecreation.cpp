#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node() {
        
        cout<<"default constructor"<<endl;
        this->next=NULL;
    }

    Node(int val) {
        this->data=val;
        this->next=NULL;
    }
};
void printll(Node* head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main() {
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
    printll(head);

    return 0;
}
