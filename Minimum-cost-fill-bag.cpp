#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int maximum=1000000;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n>>w;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        vector<int> val, wt;
        int c=0;
        for (int i=0; i<n; i++)
        {
            if (a[i]!= -1)
            {
                val.push_back(a[i]);
                wt.push_back(i+1);
                c++;
            }
        }

        n=c;
        int dp[n+1][w+1];
        for(int i=0;i<=w;i++)
            dp[0][i]=maximum;

        for (int i=1;i<=n;i++)
            dp[i][0]=0;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=w;j++)
            {
                if (wt[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=min(dp[i-1][j], dp[i][j-wt[i-1]]+val[i-1]);
            }
        }

            int res;
            //= (dp[n][w]==maximum)?-1:dp[n][w];
            if(dp[n][w]==maximum)
                res=-1;
            else
                res=dp[n][w];
            cout<<res<<"\n";
    }
}
