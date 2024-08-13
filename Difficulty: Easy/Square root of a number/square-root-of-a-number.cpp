//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
          if(n==0) return n;
        
        long long l=1,r=n;
        long long ans=-1;
        while(l<=r){
            long long mid=l+(r-l)/2;
            
            if(mid*mid==n) {
                ans=mid;
                break; 
            }
            
            else if(mid*mid>n){
                r=mid-1;
            }
            
            else{
                ans=mid; // as product of  sqrt of any number with itself is always smaller than the number , we can store that mid for the time being
                l=mid+1;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends