//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
        // Your code here
    long long sum=0;
    long long ans=0;
    long long sub;
    for(int i=0;i<n;i++){
        sub=i;
        sum += a[i];
        ans += sub*a[i];
        
    }
        long long maxi = ans;
        long long N=n;
        for(int i=1; i<n; i++){
            ans = ans +sum -N*a[n-i];
            maxi = max(maxi , ans);
        }
        
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends