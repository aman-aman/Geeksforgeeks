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
        ll n;
        cin>>n;
        ll dp[n+1];
        dp[0]=0;dp[1]=1;dp[2]=2;dp[3]=3;
        for(ll i=4;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];

        cout<<dp[n]<<"\n";
    }
}
