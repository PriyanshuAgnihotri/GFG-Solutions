//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        long long int factor =1;
        for(long long int i=2;i<=sqrt(N);i++){
            if(N%i ==0){
                if(i*i != N)
                factor += i +N/i;
                else factor += i;
            }
        }
        if(factor == N &&N!=1) return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends