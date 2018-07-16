#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fact[10]={0,1,2,6,24,120,720,5040,40320,362880};
void check(ll n,vector<ll> &v,ll d)
{
    if(n==0)
        return ;
    if(fact[d]>n)
    {
        d--;
        check(n,v,d);
    }
    else
    {
        n=n-fact[d];
        v.push_back(d);
        check(n,v,d);
    }
}
int main()
{
    ll  t;

    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v;
        check(n,v,9);

        sort(v.begin(),v.end());
        for(auto c:v)
            cout<<c;
        cout<<"\n";
    }
}

