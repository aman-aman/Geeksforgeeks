#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
#define ll long long
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,x;
        cin>>m>>n>>x;
        ll dp[n+1][x+1];
        for(ll i=0;i<=n;i++)
        {
            for(ll j=0;j<=x;j++)
                dp[i][j]=0;
        }

        for (ll j=1;j<=m&&j<=x;j++)
            dp[1][j]=1;

        for(ll i=2;i<=n;i++)
        {
            for(ll j=1;j<=x;j++)
            {
                for(ll k=1;k<=m&&k<j;k++)
                {
                    dp[i][j]+=dp[i-1][j-k];
                }
            }
        }
        cout<<dp[n][x]<<"\n";
    }
}
