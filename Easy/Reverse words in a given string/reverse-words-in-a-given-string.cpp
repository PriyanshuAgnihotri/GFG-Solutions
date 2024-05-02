//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
          reverse(S.begin(),S.end());
       int n = S.size();
       string ans = "";
       int i=0;
       while(i<n){
           string str = "";
           while(S[i]!='.' && i<n){
               str += S[i];
               i++;
           }
           
           reverse(str.begin(),str.end());
           ans +=str+'.';
           i++;
       }
       ans.pop_back();
       return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends