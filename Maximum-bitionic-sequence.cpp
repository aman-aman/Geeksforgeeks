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
        scanf("%d",&n);
        int a[n];

        vector<int> dp1(n,0),dp2(n,0);
        for(int i=0;i<n;i++)
         {
             scanf("%d",&a[i]);
             dp1[i]=a[i];
             dp2[i]=a[i];
         }


        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j]&&dp1[i]<dp1[j]+a[i])
                {
                    dp1[i]=dp1[j]+a[i];
                }
            }
        }

        for(int i=n-2;i>=0;i--)
        {
            for(int j=n-1;j>i;j--)
            {
                if(a[i]>a[j]&&dp2[i]<dp2[j]+a[i])
                {
                    dp2[i]=dp2[j]+a[i];
                }
            }
        }
       int res=0;
       for(int i=0;i<n;i++)
            res=max(res,(dp1[i]+dp2[i]-a[i]));

        printf("%d\n",res);
    }
}
