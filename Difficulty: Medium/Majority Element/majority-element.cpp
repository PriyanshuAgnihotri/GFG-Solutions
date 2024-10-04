//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {

         int count=1;
        int k=arr.size();
        sort(arr.begin(),arr.end());
        if(k==1)
        return arr[0];
        for(int i=0;i<k-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                count++;
            }
            else
            {
                count=1;
            }
            if(count>(k/2)){
                return arr[i];
            }
        }
        return -1;
        // your code here
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
    }

    return 0;
}

// } Driver Code Ends