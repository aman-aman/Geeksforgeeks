#include<bits/stdc++.h>
using namespace std;
/*
Given an input number of sections and each section has 2 plots on either sides of the road.
Find all possible ways to construct buildings in the plots such that there is a space between any 2 buildings.
*/
//aman kumar jha
int main()
{
    int n;
    cin>>n;
    int dp[n+1];
    dp[0]=0;
    dp[1]=2;
    dp[2]=3;
    for(int i=3;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];

    cout<<dp[n]*dp[n]<<"\n";
}
