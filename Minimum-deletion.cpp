#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{

        int t;
        cin>>t;
        while(t--)
        {
                string s;
                cin>>s;
                int n=s.length();
                int dp[n][n];
                for(int i=0;i<n;i++)
                    dp[i][i]=1;
                for(int l=2;l<=n;l++)
                {
                    for(int i=0;i<n-l+1;i++)
                    {
                        int j=i+l-1;
                        if(l==2&&s[i]==s[j])
                            dp[i][j]=2;
                        else if(s[i]==s[j])
                            dp[i][j]=dp[i+1][j-1]+2;
                        else
                            dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                    }
                }
                printf("%d\n",s.length()-dp[0][n-1]);
        }
}
