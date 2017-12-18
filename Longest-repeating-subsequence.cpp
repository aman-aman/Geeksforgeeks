#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        string s;
        cin>>s;

        int dp[n+1][n+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
                dp[i][j]=0;
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                dp[i][j]=(s[i-1]==s[j-1]&&i!=j)?dp[i-1][j-1]+1:max(dp[i-1][j],dp[i][j-1]);
            }
        }

        printf("%d\n",dp[n][n]);

    }
}
