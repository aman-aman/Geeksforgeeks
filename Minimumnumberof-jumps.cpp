#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int getmin(int a[],int n)
{
    if(a[0]==0)
        return -1;
    else
    {
        int jump[n];
        jump[0]=0;
        for(int i=1;i<n;i++)
        {
            jump[i]=INT_MAX;
            for(int j=0;j<n;j++)
            {
                if(i<=j+a[j]&&a[j]!=INT_MAX)
                {
                    jump[i]=min(jump[i],jump[j]+1);
                    break;
                }
            }
        }

        return jump[n-1];
    }
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
            scanf("%d",&a[i]);
        int val=getmin(a,n);
        printf("%d\n",val==INT_MIN?-1:val);
    }
}
