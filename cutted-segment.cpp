#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int cut(int n,int x,int y,int z)
{
    vector<int > dp(n+1,0);
    int a,b,c;
    for(int i=1;i<=n;i++)
    {
        a=(i-x>=0?dp[i-x]:-1);
        b=(i-y>=0?dp[i-y]:-1);
        c=(i-z>=0?dp[i-z]:-1);
        dp[i]=((a<0&&b<0&&c<0)?-1:1+max(a,max(b,c)));
    }
    return dp[n];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        printf("%d\n",cut(n,x,y,z));
    }
}
