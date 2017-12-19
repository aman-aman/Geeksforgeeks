#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
vector<bool> prime(1000001,true);
#define ll long long
void seive()
{
    prime[0]=false;
    prime[1]=false;
    for (ll p=2; p*p<=1000000; p++)
    {
        if (prime[p] == true)
        {
            for (ll  i=p*2; i<=1000000; i += p)
                prime[i] = false;
        }
    }
}
int main()
{
    seive();
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        for(ll i=a;i<=b;i++)
        {
            if(prime[i]==true)
                cout<<i<<" ";
        }
        cout<<"\n";
    }
}

