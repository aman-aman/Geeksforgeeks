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
        int a[n];
        int dp1[n],dp2[n];
        for(int i=0;i<n;i++)
           {
               cin>>a[i];
               dp1[i]=1;
               dp2[i]=1;
           }

           for(int i=1;i<n;i++)
           {
               for(int j=0;j<i;j++)
               {
                   if(a[i]>a[j]&&dp1[i]<dp1[j]+1)
                        dp1[i]=dp1[j]+1;
                }
           }

           for(int i=n-2;i>=0;i--)
           {
               for(int j=n-1;j>i;j--)
               {
                   if(a[i]>a[j]&&dp2[i]<dp2[j]+1)
                        dp2[i]=dp2[j]+1;
                }
           }

           int res=-1;
           for(int i=0;i<n;i++)
           {
               res=max(res,dp1[i]+dp2[i]-1);
           }

           cout<<res<<"\n";

    }
}
