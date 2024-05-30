//question:-(gfg)
/*Given a singly linked list of N nodes. Find the first node of the loop if the linked list has a loop. 
If a loop is present return the node data of the first node of the loop else return -1.*/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        Node*slow=head;
        Node*fast=head;
        
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
            if(fast==slow) break;
        }
        
        if(fast==NULL)
        {
            return -1;
        }
        
        slow=head;
        while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;

            if(fast==slow)
            {
                fast->next=NULL;
                return fast->data;
            }
        }
        return fast->data;
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        int ans = ob.findFirstNode(head);
        cout<<ans<<"\n";
    }
	return 0;
}
