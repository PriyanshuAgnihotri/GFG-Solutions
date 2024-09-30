//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
             vector<int>arr;
        int org = n; 
        
        while(n>0){
            int d = n%10;
            arr.push_back(pow(d,3));
            n/=10;
        }
        int sum = 0;
        for(auto num : arr){
            sum += num;
        }
        
        if(sum == org){
            return "true";
        }
        else{
            return "false";
        }
        
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends