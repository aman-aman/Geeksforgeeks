
//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r,c;
        scanf("%d%d",&r,&c);
        int a[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        int dp[r][c];
        int m=r,n=c;
        dp[m-1][n-1]=a[m-1][n-1]>0?1:abs(a[m-1][n-1])+1;
        for (int i=m-2;i>=0;i--)
             dp[i][n-1]=max(dp[i+1][n-1]-a[i][n-1],1);
        for (int j=n-2;j>=0;j--)
             dp[m-1][j]=max(dp[m-1][j+1]-a[m-1][j],1);

        for(int i=m-2;i>=0;i--)
        {
            for (int j=n-2;j>=0;j--)
            {
                int minval= min(dp[i+1][j],dp[i][j+1]);
                dp[i][j] = max(minval-a[i][j],1);
            }
         }

        cout<<dp[0][0]<<"\n";
    }
}
