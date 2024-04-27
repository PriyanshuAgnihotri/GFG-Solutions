//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
Node *compute(Node *head)
    {
        
        if(!head)
            return head;
            
        //Reverse the Linked List    
        Node* curr=head,*prev=NULL,*nxt=NULL;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        head=prev;
        
        Node* temp=prev;
        while(temp){
            while(temp && temp->next && temp->data > temp->next->data){
                temp->next=temp->next->next;
            }    
            temp=temp->next;
        }
        
        curr=head;
        prev=NULL;
        nxt=NULL;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
        
    
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends