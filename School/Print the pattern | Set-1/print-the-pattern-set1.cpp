//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}
// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
//Your code here
  int a=n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i*n;j++){
            cout<<a<<' ';
            if(j%i==0){
                a--;
            }
        }
        a=n;
        cout<<'$';
         }
};