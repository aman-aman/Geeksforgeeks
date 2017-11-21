
#include<bits/stdc++.h>
using namespace std;
int coinchange(int s[],int n,int m)
{
    int dp[n+1][m];
    for(int i=0;i<m;i++)
        dp[0][i]=1;

    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x=(i>=s[j])?dp[i-s[j]][j]:0;
            int y=(j>=1)?dp[i][j-1]:0;
            dp[i][j]=x+y;
        }
    }

    return dp[n][m-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n,m;
         cin>>m;
         int s[m];
         for(int i=0;i<m;i++)
            cin>>s[i];
         cin>>n;
         cout<<coinchange(s,n,m)<<"\n";
    }
}
