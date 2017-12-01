#include<bits/stdc++.h>
using namespace std;
#define ll long long
//aman kumar jha
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;

        cin>>n;
        ll c[n+1];
        c[0]=1;
        c[1]=1;
        for(ll i=2;i<=n;i++)
        {
            c[i]=0;
            for(ll j=0;j<i;j++)
            {
                c[i]=c[i]+c[j]*c[i-j-1];
            }
        }
        cout<<c[n]<<"\n";
    }
}
