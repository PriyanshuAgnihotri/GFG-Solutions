//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
    sort(arr, arr+N);
       
       string s1=arr[0];
       string s2 = arr[N-1];
       
      
       string ans="";
       
      for(int i=0; i<s2.size(); i++){
          if(s1[i]==s2[i]){
              ans = ans+s1[i];
          }
          else{
                 break;
          }
      }
      
      if(ans==""){
          ans= ans+"-1";
          return ans;
      }
      else{
          return ans;
      }
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends