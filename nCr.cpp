
#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
#define ll long long
ll p=1000000007;
ll min(ll a,ll b)
{
    return (a>b?b:a);
}
ll ncrmodp(ll n, ll r)
{
    ll c[r+1];
    for(int i=0;i<=r;i++)
        c[i]=0;

    c[0]=1;
    for (ll i=1;i<=n;i++)
    {
        for (ll j=min(i,r);j>0;j--)
        {
            c[j]=(c[j]+c[j-1])%p;
        }
    }
    return c[r];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,r;
        cin>>n>>r;
        cout<<ncrmodp(n,r)<<"\n";
    }
}
