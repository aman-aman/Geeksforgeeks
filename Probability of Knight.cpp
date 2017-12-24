//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
 double dp[101][101][101];
bool inside(int x,int y,int n)
    {
        return (x<n&&x>=0&&y<n&&y>=0);
    }
    double prob(int n, int k, int r, int c)
    {
        int dx[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
        int dy[] = { 2, 1, -1, -2, -2, -1, 1, 2 };

        memset(dp,0.0000000,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                dp[i][j][0]=1.0000000;
        }

        for(int s=1;s<=k;s++)
        {
         for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    double prob=0.0000000;
                    for(int k=0;k<8;k++)
                    {
                        int nx=i+dx[k];
                        int ny=j+dy[k];
                        if(inside(nx,ny,n))
                        {
                            prob+=(dp[nx][ny][s-1])*0.125000;
                        }
                    }
                    dp[i][j][s]=prob;
                }
            }
        }
        return dp[r][c][k];
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,y;
        cin>>n>>x>>y>>k;
       // cout<<prob(n,k,x,y)<<"\n";
       printf("%0.6f\n",prob(n,k,x,y));
    }
	//code
	return 0;
}
