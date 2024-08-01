//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        sort(arr.begin(), arr.end());
        string ans="";
        string first = arr[0], last =arr[arr.size()-1];
        
        for(int i=0;i<min(first.length(), last.length());i++){
            if(first[i] != last[i]){
                if(ans == "")
                return "-1";
                return ans;
            }
            ans += first[i];
            
        }
        if(ans ==" ")
        return "-1";
        return ans;
        }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends