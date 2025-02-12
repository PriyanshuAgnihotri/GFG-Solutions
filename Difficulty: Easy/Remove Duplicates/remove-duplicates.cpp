//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
        string ans = "";
        unordered_set<char> st;
         for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(st.find(ch) == st.end()){
                st.insert(ch);
                ans.push_back(ch);
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends