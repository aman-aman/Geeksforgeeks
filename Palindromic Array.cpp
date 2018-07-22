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

        int l=0,h=n-1,cnt=0;
        while(l<=h)
        {
            while(a[l]<a[h])
            {
                a[l+1]+= a[l];
                cnt++; l++;
            }

            while(a[h]<a[l])
            {
                a[h-1]+= a[h];
                cnt++; h--;
            }

            if(a[l]==a[h])
            {
                l++;h--;
            }
        }
        cout<<cnt<<"\n";
    }
}
