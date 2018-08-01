#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,sum,start=0;
        cin>>n>>sum;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int flag=0;
        int cursum=a[0];
        for(int i=1;i<=n;i++)
        {
            while(cursum>sum&&start<i-1)
            {
                cursum-=a[start];
                start++;
            }
            if(cursum==sum)
            {
                cout<<start+1<<" "<<i<<"\n";
                flag=1;
                break;
            }
             if(i<n)
                    cursum+=a[i];
        }
        if(flag==0)
            cout<<"-1\n";
    }
}
