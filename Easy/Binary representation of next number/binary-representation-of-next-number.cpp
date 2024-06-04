//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        char carry='1';
        string next="";
        int n=s.length();
        if(s[n-1]=='0')
        {
            s[n-1]='1';
            carry='0';
        }
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                if(s[i]=='1' && carry=='1')
                {
                    s[i]='0';
                }
                else if(s[i]=='0' && carry=='1')
                {
                    s[i]='1';
                    carry='0';
                    break;
                }
            }
        }
        int i=0;
        while(s[i]=='0')
        {
            i++;
            if(s[i]=='1')
            {
                next=s.substr(i,n-i);
                return next;
            }
        }
        if(carry=='1')
        {
            s=carry+s;
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends