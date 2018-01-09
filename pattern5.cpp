//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    char dp[n][2*n];
    memset(dp,' ',sizeof(dp));
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<2*n;j++)
        {
            if(j%2==1)
                dp[i][j]='*';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2*n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
}
