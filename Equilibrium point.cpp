//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],dp1[n],dp2[n];
        memset(dp1,0,sizeof(dp1));
        memset(dp2,0,sizeof(dp2));
        for(int i=0;i<n;i++)
            cin>>a[i];

        dp1[0]=a[0];
        dp2[n-1]=a[n-1];
        for(int i=1;i<n;i++)
            dp1[i]=a[i]+dp1[i-1];

        for(int i=n-2;i>=0;i--)
            dp2[i]=a[i]+dp2[i+1];

        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(dp1[i]==dp2[i])
                ans=i+1;
        }

        cout<<ans<<"\n";
    }
}
