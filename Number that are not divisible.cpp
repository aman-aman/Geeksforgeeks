#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        ll c=0;
        c+=n/2+n/3+n/5+n/7-n/6-n/10-n/14-n/15-n/21-n/35+n/30+n/42+n/70+n/105-n/210;
        ll  res=n-c;
        cout<<res<<"\n";
    }
}
