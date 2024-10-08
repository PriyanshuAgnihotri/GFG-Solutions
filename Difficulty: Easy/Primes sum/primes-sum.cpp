//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
        // code here,
        int a=0,b=0, sum =0;
        if(N <= 2){
            return "No";
        }
        for(int i=2;i<= N/2;++i){
            if(isPrime(i) && isPrime(N-i)){
                return "Yes";
            }
        }
        return "No";
    }
    
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n % i ==0){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends