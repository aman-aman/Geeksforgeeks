#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
#define ll long long
ll mod=1000000007;
ll dp[106];
void cal()
{
    dp[0]=0;
    dp[1]=1;
    for(ll i=2;i<=105;i++)
        dp[i]=(dp[i-1]+dp[i-2])%mod;
}
int main()
{
    cal();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n=n+2;
        cout<<dp[n]<<"\n";
    }
}
