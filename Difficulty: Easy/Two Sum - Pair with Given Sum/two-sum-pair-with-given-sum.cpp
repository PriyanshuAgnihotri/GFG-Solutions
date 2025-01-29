//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {  
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
         int n = arr.size();
        
        sort(arr.begin(), arr.end());
        
        int i = 0;
        int j = n-1;
        int res = 0;
        
        while(i < j)
        {
            res = arr[i] + arr[j];
            
            if(res == target)
            {
                return true;
            }
            
            if(res < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        
        return false;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.twoSum(arr, x);
        cout << (ans ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends