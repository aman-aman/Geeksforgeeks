#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>k;
        int dp[n];
        dp[0]=0;
        sort(a,a+n);
        for(int i =1;i<n;i++)
        {
            dp[i]=dp[i-1];
            if (a[i]-a[i-1]<k)
            {
                if (i>=2)
                    dp[i]=max(dp[i],dp[i-2]+a[i]+a[i-1]);
                else
                    dp[i]=max(dp[i],a[i]+a[i-1]);
            }
    }
    cout<<dp[n-1]<<"\n";

    }
}
