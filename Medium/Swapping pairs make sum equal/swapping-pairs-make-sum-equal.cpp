//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        int s1=0;
        int s2=0;
        
      for(int i=0;i<n;i++){
          s1 += a[i];
      }
          for(int i=0; i<m;i++){
              s2+= b[i];
          }
          if(s1 == s2)
          return 1;
          sort(a, a+n);
        sort(b, b+m);
        int x=0;
        int y =0;
        while(x<n and y <m){
            int ans1=s1 - a[x] + b[y];
            int ans2 =s2-b[y]+a[x];
            
            if(ans1 == ans2){
            return 1;
            }
            if(ans1 > ans2){
                x++;
            }
            else{
                y++;
            }
        }
      return -1;
    }
    
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends