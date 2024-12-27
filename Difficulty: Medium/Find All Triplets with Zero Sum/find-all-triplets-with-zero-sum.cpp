//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
           int n=arr.size();
        vector<vector<int>>ans;
        for (int i=0;i<n-2;i++){
            for (int j=i+1;j<n-1;j++){
                vector<int>res(3);
                res[0]=i;
                res[1]=j;
                res[2]=-1*(arr[i]+arr[j]);
                ans.push_back(res);
            }
            
        }  
        vector<vector<int>>triplet;
        for (int i=0;i<ans.size();i++){
            int temp=ans[i][2];
           
            vector<int>v(3);
            for (int j=0;j<n;j++){
                if(temp==arr[j] && j!=ans[i][0] && j!=ans[i][1]){
                    v[0]=ans[i][0];
                    v[1]=ans[i][1];
                    v[2]=j;
                    sort(v.begin(),v.end());
                    triplet.push_back(v);
                } 
            }
        }
        sort(triplet.begin(),triplet.end());
        auto last=unique(triplet.begin(),triplet.end());
        triplet.erase(last,triplet.end());
        return triplet;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;

        vector<vector<int>> res = ob.findTriplets(arr);
        sort(res.begin(), res.end());
        if (res.size() == 0) {
            cout << "[]\n";
        }
        for (int i = 0; i < res.size(); i++) {
            for (int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends