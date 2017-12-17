#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>m>>n;
        int val[m][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>val[i][j];
        }
        int dp[m][n];
        dp[m-1][n-1]=val[m-1][n-1]>0?1:abs(val[m-1][n-1])+1;
        for (int i=m-2;i>=0;i--)
             dp[i][n-1]=max(dp[i+1][n-1]-val[i][n-1],1);
        for (int j=n-2;j>=0;j--)
             dp[m-1][j]=max(dp[m-1][j+1]-val[m-1][j],1);

        for(int i=m-2;i>=0;i--)
        {
            for(int j=n-2;j>=0;j--)
            {
                int m=min(dp[i][j+1],dp[i+1][j]);
                dp[i][j]=max(m-val[i][j],1);
            }
        }

        //for(int i=0;i<n;i++){for(int j=0;j<n;j++)cout<<dp[i][j]<<" ";cout<<"\n";}
        cout<<dp[0][0]<<"\n";
    }
}
