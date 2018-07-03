
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll maxval=100000000;
ll coinchange(ll s[],ll n,ll m)
{
    ll ways[n+1];
   for(ll i=0;i<=n;i++)
    ways[i]=maxval;

    ways[0]=0;
    for(ll i=0;i<n+1;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(i>=s[j])
            {
                if(ways[i-s[j]]!=maxval)
                    ways[i]=min(ways[i],1+ways[i-s[j]]);
            }
        }
    }

    return ways[n];
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
         ll n,m;
         cin>>n>>m;
         ll s[m];
         for(ll i=0;i<m;i++)
            cin>>s[i];

        ll ans=coinchange(s,n,m);
        cout<<((ans==maxval)?(ll)-1:ans)<<"\n";
    }
}
