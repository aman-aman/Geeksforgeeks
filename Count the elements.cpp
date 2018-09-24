
/*
    Given two arrays A and B. Given Q queries each having a positive integer i denoting
    an index of the array A.
    For each query, your task is to find all the elements less than or equal to Ai
    in the array B.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++)
	        cin>>b[i];

	   int maxelement=*max_element(a,a+n);
	   int cnt[maxelement+1];
	   for(int i=0;i<=maxelement;i++)
	        cnt[i]=0;

	   for(int i=0;i<n;i++)
	        cnt[b[i]]++;

	   for(int i=1;i<=maxelement;i++)
	   {
	       cnt[i]=cnt[i-1]+cnt[i];
	   }

	   int q;
	   cin>>q;
	   while(q--)
	   {
	       int pos;
	       cin>>pos;
	       cout<<cnt[a[pos]]<<"\n";
	   }


	}
}
