#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    scanf("%lld",&t);
    ll dp[100];
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    dp[4]=2;
    for(ll i=5;i<=80;i++)
    {
        dp[i]=dp[i-1]+dp[i-4];
    }
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        printf("%lld\n",dp[n]);
    }
}
