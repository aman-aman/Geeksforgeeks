
/*
aman kumar jha


Given an unsorted array, trim the array such that twice of minimum is greater than maximum in the trimmed array.
Elements should be removed either end of the array.
*/
#include<bits/stdc++.h>
using namespace std;
int minelement(int a[],int l,int h)
{
    int ans=a[l];
    for(int i=l+1;i<=h;i++)
        ans=min(ans,a[i]);

    return ans;
}
int maxelement(int a[],int l,int h)
{
    int ans=a[l];
    for(int i=l+1;i<=h;i++)
        ans=max(ans,a[i]);

    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int rem=0;
        int dp[n][n];
        for(int gap=0;gap<n;gap++)
        {
            for(int i=0,j=gap;j<n;i++,j++)
            {
                int min1=minelement(a,i,j);
                int max1=maxelement(a,i,j);
                dp[i][j]=(2*min1>max1)?0:min(1+dp[i][j-1],1+dp[i+1][j]);
            }
        }
        cout<<dp[0][n-1]<<"\n";
    }
}
