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
        cin>>n;
        if(n>6)
        {
            int dp[n+1];
            for(int i=0;i<=min(6,n);i++)
                dp[i]=i;

            for(int i=7;i<=n;i++)
                dp[i]=max(i,dp[i/2]+dp[i/3]+dp[i/4]);

            cout<<dp[n]<<"\n";
        }
        else
        {
            cout<<n<<"\n";
        }

    }
}
