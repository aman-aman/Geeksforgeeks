#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    string t,p;
	    cin>>t>>p;
	    vector<int>tm(256),pm(256);
	    for(int i=0;i<p.length();i++)
	    {
	        pm[p[i]]++;
	    }
	    int minlen=INT_MAX,start=0,pos=INT_MAX,cnt=0;
	    for(int i=0;i<t.length();i++)
	    {
	        tm[t[i]]++;
	        //cout<<cnt<<"\n";
	        if(pm[t[i]]!=0&&pm[t[i]]>=tm[t[i]])
	            cnt++;
	        if(cnt==p.length())
	        {
	            while((tm[t[start]]>pm[t[start]])||(pm[t[start]]==0))
	            {
	                if(tm[t[start]]>pm[t[start]])
	                    tm[t[start]]--;
	               start++;
	            }
	            int len=i-start+1;
	            if(minlen>len)
	            {
	                minlen=len;
	                pos=start;
	            }
	        }
	    }
	    //cout<<pos<<" "<<minlen<<"\n";

	    if(pos==-1)
			cout<<"-1\n";
		else
		{
			cout<<t.substr(pos,minlen)<<"\n";
		}
	}
}
