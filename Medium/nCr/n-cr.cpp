//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        // code here
        
        if(n < r) return 0;
        vector<int>ans;
        int mod=1e9 +7;
        
        for(int i=0;i<=n;i++){
            vector<int>v(i+1,1);
             
             for(int j=1;j<i;j++){
                 v[j]=(ans[j] + ans[j-1])%mod;
             }
             ans=v;
        }
        return ans[r];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends