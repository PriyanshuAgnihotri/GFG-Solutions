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
        
        string ans="";
             for(int i=0;i<arr[0].length();i++)
             {
                 char ch=arr[0][i];
                 bool match=true;
                 for(int j=1;j<arr.size();j++)
                 {
                     if(arr[j].length()<i||arr[j][i]!=ch)
                     {
                         match=false;
                         break;
                     }
                 }
                 if(match==false)
                 break;
                 else
                 ans.push_back(ch);
             }
             if(ans.length()==0)
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