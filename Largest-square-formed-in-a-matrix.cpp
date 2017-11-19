//aman kumar jha
#include<bits/stdc++.h>
using namespace std;

int getmaxarea(int a[],int n)
{
    int area=0,maxarea=0,i=0;
    stack<int> s;
    while(i<n)
    {
        if(s.empty()||a[s.top()]<=a[i])
            s.push(i++);
        else
        {
            int top=s.top();
            s.pop();
            area=a[top]*(s.empty()?i:i-s.top()-1);
            maxarea=max(area,maxarea);
        }
    }

    while(!s.empty())
    {
            int top=s.top();
            s.pop();
            area=a[top]*(s.empty()?i:i-s.top()-1);
            maxarea=max(area,maxarea);
    }
    return maxarea;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int mat[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cin>>mat[i][j];
        }

        int area=0,maxarea=0;
        area=getmaxarea(mat[0],m);
        maxarea=max(area,maxarea);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==1)
                    mat[i][j]+=mat[i-1][j];
            }
            area=getmaxarea(mat[i],m);
            maxarea=max(area,maxarea);
        }
        cout<<maxarea<<"\n";
    }
}
