#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int v;
        cin>>v;
        int adj[v][v];
        int dp[v][v];
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                dp[i][j]=INT_MAX;
            }
        }

        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                cin>>adj[i][j];
                dp[i][j]=adj[i][j];
            }
        }

        for(int k=0;k<v;k++)
        {
            for(int i=0;i<v;i++)
            {
                for(int j=0;j<v;j++)
                {
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
                }
            }
        }

        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                cout<<dp[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
}
