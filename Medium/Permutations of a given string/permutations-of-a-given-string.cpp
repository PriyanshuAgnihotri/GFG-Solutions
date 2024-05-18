//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	   void findpermutation(string st,string s,vector<string> &v,int n){
        if(s.size()<=0){
            v.push_back(st);
            return;
        }
        for(int i=0; i<n; i++){
                if(i > 0 && s[i] == s[i - 1])
                continue;             
            st.push_back(s[i]);
            string temp=s;
            s.erase(s.begin()+i);
            findpermutation(st,s,v,s.size());
            st.pop_back();
            s=temp;
        }
    }
 
        vector<string>find_permutation(string s)
          {
   vector<string>v;
   sort(s.begin(),s.end());
   string st;
   findpermutation(st,s,v,s.size());
   return v;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends