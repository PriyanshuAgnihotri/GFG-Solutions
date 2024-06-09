//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
             int i,up=0,low=0,num=0,spl=0;
            for(i=0;i<s.length();i++){
                if(isupper(s[i])){
                    up++;
                }
                else if(islower(s[i])){
                    low++;
                }
                else if(isdigit(s[i])){
                    num++;
                }
                else{
                    spl++;
                }
            }
            return {up,low,num,spl};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends