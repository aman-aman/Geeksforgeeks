#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        string s1,s2;
        cin>>s1>>s2;
        int m=s1.length(),n=s2.length();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0||j==0)
                    dp[i][j]=0;
                else if (s1[i-1]==s2[j-1])
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        int val=dp[m][n];
       // cout<<val<<"\n";
        int costx=(s1.length()-val)*x;
        int costy=(s2.length()-val)*y;
        printf("%d\n",costx+costy);
    }
}
