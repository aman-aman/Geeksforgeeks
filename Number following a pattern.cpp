#include<bits/stdc++.h>
using namespace std;
#define ll long long
/*
Input
5
D
I
DD
IIDDD
DDIDDIID

Output
21
12
321
126543
321654798

*/
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    string s,res;
	    cin>>s;
	    stack<int> st;
	    for(int i=0;i<=s.length();i++)
	    {
	        st.push(i+1);
	        if(s[i]=='I'||i==s.length())
	        {
	            while(!st.empty())
	            {
	                res+=to_string(st.top());
	                st.pop();
	            }
	        }
	    }
	    cout<<res<<"\n";
	}
}
