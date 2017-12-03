#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
    int coeff[]={2,2,5};
    int rhs=4,n=3;
    int  dp[rhs+1];
    for(int i=0;i<=rhs;i++)
        dp[i]=0;

    dp[0]=1;
    int res=0;
    for(int i=0;i<n;i++)
    {
        for(int j=coeff[i];j<=rhs;j++)
            dp[j]=dp[j]+dp[j-coeff[i]];
    }

    printf("%d\n",dp[rhs]);
}
