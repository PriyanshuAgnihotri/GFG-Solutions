//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n=arr.size(),i=0,j=0;
        int sum=0;
        
        while(j<n){
            if(arr[j]==target)
            return {j+1,j+1};
            
            if(sum+arr[j]== target)
            return {i+1,j+1};
            
            else if(sum+arr[j]>target){
                sum-=arr[i];
                i++;
            }
            else{
                 sum+=arr[j];
                 j++;
            };
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends