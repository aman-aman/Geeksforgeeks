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
        int dp[n+1];
        dp[0]=0;dp[1]=0;
        dp[2]=1;dp[3]=1;

        for(int i=4;i<=n;i++)
        {
            int t1=(i%3==0)?dp[i/3]:INT_MAX;
            int t2=(i%2==0)?dp[i/2]:INT_MAX;
            int t3=dp[i-1];
            dp[i]=min(min(t1,t3),t2)+1;
        }

        cout<<dp[n]<<"\n";
    }
}
