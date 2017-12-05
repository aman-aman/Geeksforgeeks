#include<bits/stdc++.h>
using namespace std;
#define ll long long
//aman kumar jha
int main()
{
    ll t;
   scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        ll cnt[n+1];
        cnt[0]=0;
        cnt[1]=1;
        cnt[2]=1;
        cnt[3]=1;
        cnt[4]=2;

        for(ll i=5;i<=n;i++)
            cnt[i]=cnt[i-1]+cnt[i-4];


        printf("%lld\n",cnt[n]);
    }
    return 0;
}
