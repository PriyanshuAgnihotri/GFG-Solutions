//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    // code here   
	       for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(arr[i][j],arr[j][i]);
            }
        }
        int start=0;
        int last=n-1;
        int j=0;
        while(j<n)
        {
            while(start<last)
            {
                swap(arr[start][j],arr[last][j]);
                start++;
                last--;
            }
            start=0;
            last=n-1;
            j++;
	    
	}
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; i++) {
            vector<int> a;
            for (int j = 0; j < n; j++) {
                cin >> x;
                a.push_back(x);
            }
            arr.push_back(a);
        }
        Solution ob;
        ob.rotateMatrix(arr, n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends