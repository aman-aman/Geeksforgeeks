#include<bits/stdc++.h>
using namespace std;
//n-lis
#define ll long long
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];

	   int lis[n];
	    for (int i = 0; i < n; i++ )
        lis[i] = 1;


    for (int i = 1; i < n; i++ )
        for (int j = 0; j < i; j++ )
            if ( a[i] >a[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    int len=INT_MIN;
    for(int i=0;i<n;i++)
        len=max(len,lis[i]);

    cout<<n-len<<"\n";
	}
}
