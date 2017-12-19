#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
vector<bool> prime(10001,true);
#define ll long long
void seive()
{
    prime[0]=false;
    prime[1]=false;
    for (ll p=2; p*p<=10000; p++)
    {
        if (prime[p] == true)
        {
            for (ll  i=p*2; i<=10000; i += p)
                prime[i] = false;
        }
    }
}
bool bothtrue(ll a,ll b)
{
    if(prime[a]==true&&prime[b]==true)
        return true;
    return false;
}
int main()
{
    seive();
 int t;
 cin>>t;
 while(t--)
 {
     ll  n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         if(prime[i]==true&&prime[n-i]==true)
         {
             cout<<i<<" "<<n-i<<"\n";
             break;
         }
     }


 }
}
