#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,W;
        scanf("%d%d",&n,&W);
        int a[n],w[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);

        for(int i=0;i<n;i++)
            scanf("%d",&w[i]);

        int dp[n+1][W+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=W;j++)
            {
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(w[i-1]<=j)
                {
                    dp[i][j]=max(a[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
                }
                else
                    dp[i][j]=dp[i-1][j];
            }
        }

        printf("%d\n",dp[n][W]);
    }
}
