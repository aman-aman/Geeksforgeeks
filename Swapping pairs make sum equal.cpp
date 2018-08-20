#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool possible(ll a[],ll n,ll b[],ll m)
{
   ll sa=0,sb=0;
   for(ll i=0;i<n;i++)
        sa+=a[i];

   for(ll i=0;i<m;i++)
        sb+=b[i];

   map<ll,ll>mp;
   for(ll i=0;i<n;i++)
   {
       for(ll j=0;j<m;j++)
       {
            if(sb-b[j]+a[i]==sa-a[i]+b[j])
                return 1;
       }
   }
   return 0;
}
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,m;
	    cin>>n>>m;
	    ll a[n],b[m];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	   for(ll i=0;i<m;i++)
	        cin>>b[i];
	   cout<<possible(a,n,b,m)<<"\n";
	}
}
