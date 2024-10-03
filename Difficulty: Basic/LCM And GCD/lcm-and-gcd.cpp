//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     int GCD(long long a, long long b){
      if(b == 0) return a;
      return GCD(b, a%b);
  }
  
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long gcd  = GCD(A,B);
        long long lcm = (A*B)/gcd;
        return {lcm, gcd};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends