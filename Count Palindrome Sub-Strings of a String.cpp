#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
        int t;
        cin>>t;
        while(t--)
        {
                int n;
                string s;
                cin>>n>>s;
                int dp[n][n];
                bool p[n][n];
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        dp[i][j]=0;
                        p[i][j]=false;
                    }
                }

                for(int i=0;i<n;i++)
                {
                    p[i][i]=true;
                }

                for(int i=0;i<n-1;i++)
                {
                    if(s[i]==s[i+1])
                    {
                        dp[i][i+1]=1;
                        p[i][i+1]=true;
                    }
                }

                for(int gap=2;gap<n;gap++)
                {
                    for(int i=0;i<n-gap;i++)
                    {
                        int j=gap+i;
                        if(s[i]==s[j]&&p[i+1][j-1])
                        {
                            p[i][j]=true;
                        }
                        if(p[i][j]==true)
                        {
                            dp[i][j]=dp[i][j-1]+dp[i+1][j]+1-dp[i+1][j-1];
                        }
                        else
                        {
                            dp[i][j]=dp[i][j-1]+dp[i+1][j]-dp[i+1][j-1];
                        }
                    }
                }
                /*for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                        cout<<dp[i][j]<<" ";
                    cout<<"\n";
                }*/
                cout<<dp[0][n-1]<<"\n";
        }
}
