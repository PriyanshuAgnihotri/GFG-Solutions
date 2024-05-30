//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
     long long  sum = 0 ;  
        for(int i =0; i < n ; i++){
            sum += a[i];  // get the sum of array
        }
        long long  left_sum = 0;   // initialise left sum as zero
        long long  right_sum = sum; // and right sum as total sum
        
        for(int i =0; i < n ; i++){ 
            right_sum -=a[i];   // update right sum
            if(right_sum == left_sum){
                return i+1;
            }
            left_sum += a[i];   // Update left sum
        }
        return -1;
        // Your code here
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends