#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int maxsum(int a[],int n)
{
    vector<int> lsum(n);
    for(int i=0;i<n;i++)
        lsum[i]=a[i];

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j]&&lsum[i]<lsum[j]+a[i])
                lsum[i]=lsum[j]+a[i];
        }
    }

    return *max_element(lsum.begin(),lsum.end());
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

        cout<<maxsum(a,n)<<"\n";
    }
}
