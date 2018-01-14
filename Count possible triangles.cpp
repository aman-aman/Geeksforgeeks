#include<bits/stdc++.h>
using namespace std;
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

        int cnt=0;
        for(int i=0;i<n-2;i++)
        {
            int k=i+2;
            for(int j=i+1;j<n;j++)
            {
                while(k<n&&a[j]+a[i]>a[k])
                    k++;
                cnt+=k-j-1;
            }
        }
        cout<<cnt<<"\n";
    }
}
