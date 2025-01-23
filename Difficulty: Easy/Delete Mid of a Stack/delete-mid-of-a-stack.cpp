//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void solve(stack<int> &s, int k) {
          if(k == 1) {
        s.pop();
        return;
    }
    int t1 = s.top();
    s.pop();
    solve(s, k-1);
    s.push(t1);
} 
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        if(s.size() == 0) {
            return;
        }
        solve(s, ceil(float (s.size()+1)/2));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        stack<int> s;
        int num;
        while (ss >> num) {
            s.push(num);
        }

        Solution ob;
        ob.deleteMid(s);
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends