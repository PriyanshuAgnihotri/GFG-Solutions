//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isPalindrome(string &s,int i,int j){
        while(i<=j){
            if(s[i++] != s[j--])
            return 0;
        }
        return 1;
    }
    string longestPalin (string s) {
        string ans = "";
        ans.push_back(s[0]);
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                if(s[i]==s[j] and (j-i+1)>ans.length() and isPalindrome(s,i,j)){
                        ans=s.substr(i,(j-i+1));
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends