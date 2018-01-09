//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=3,i;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<k<<" ";
        k++;
        cout<<"\n";
    }
    k--;
    k--;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout<<k<<" ";
        k--;
        cout<<"\n";
    }
}
