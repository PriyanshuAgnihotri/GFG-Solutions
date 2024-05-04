//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
           if(n==0) return 0;
        if(n==1) return 1;
        int prev1=1;
        int prev2=0;
        for(int i=2;i<=n;i++){
            int curr=(prev1+prev2)%1000000007;
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends