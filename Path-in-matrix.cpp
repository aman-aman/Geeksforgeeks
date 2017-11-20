#include<bits/stdc++.h>
using namespace std;
int a[21][21];
int mincost(int n)
{
    int dp[n][n+2];
    memset(dp,0,sizeof(dp));
    int val=INT_MIN;
    for(int i=0;i<n;i++)
      {
          dp[0][i+1]=a[0][i];
      }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[i][j]=max(dp[i-1][j-1],max(dp[i-1][j],dp[i-1][j+1]))+a[i][j-1];
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<=n;i++)
        ans=max(ans,dp[n-1][i]);

    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        }
        cout<<mincost(n)<<"\n";
    }
}
