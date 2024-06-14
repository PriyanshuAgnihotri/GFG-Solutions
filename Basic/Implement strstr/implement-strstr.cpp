//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
      int t  = 0,ans = 0;
     for(int i=0; i<s.length(); i++){
         if(s[i]==x[0]){
            ans = i,t = 1;
            
            if(t==x.length())
             return ans;
             
             while(t<x.length()){
                 
                if(s[i+t]==x[t++]){
                 
                   if(t==x.length())
                   return ans;
              }
              else break;
             }
         }
     }
     
    return -1;
}