//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}









// } Driver Code Ends
/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:

  void leftsolve(Node* root,vector<int>&ans)
   {
       if(root==NULL)
        return;
       if(root->left==NULL && root->right==NULL)
       {
           return;
       }
      ans.push_back(root->data);
      if(root->left!=NULL)
      leftsolve(root->left,ans);
      else
       leftsolve(root->right,ans);
   }
     void rightsolve(Node* root,vector<int>&ans1)
   {
       if(root==NULL)
        return;
       if(root->left==NULL && root->right==NULL)
       {
           return;
       }
       if(root->right!=NULL)
        rightsolve(root->right,ans1);
      else
      rightsolve(root->left,ans1);
      ans1.push_back(root->data);
   }
   void leafsolve(Node* root,vector<int>&ans)
   {
       if(root==NULL)
        return;
       if(root->left==NULL && root->right==NULL)
       {
           ans.push_back(root->data);
           return;
       }
       leafsolve(root->left,ans);
       leafsolve(root->right,ans);
       return;
   }
    vector <int> boundary(Node *root)
    {
        
        vector<int>ans,ans1;
        if (!(root->left == NULL && root->right == NULL)) 
        {
        ans.push_back(root->data);
        }
        Node* temp=root;
        if(root->left!=NULL)
         leftsolve(root->left,ans);
         leafsolve(temp,ans);
         if(root->right!=NULL)
        rightsolve(temp->right,ans);
        return ans;
    }
};

//{ Driver Code Starts.

/* Driver program to test size function*/

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        vector <int> res = ob.boundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends