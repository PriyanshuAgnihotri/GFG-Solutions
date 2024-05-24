//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
         int maxi=INT_MIN;
        int end = arr[0];
        int count=1;
        sort(arr,arr+N);
        for(int i=0;i<N;i++) {
            int temp = end+1;
            if(arr[i]==temp) {
                count++;
            }
            else if(arr[i]!=end) {
                count=1;
            }
            end = arr[i];
            maxi = max(maxi,count);
        }
        return maxi; 
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends