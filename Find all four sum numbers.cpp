#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	       int n,s;
	       cin>>n>>s;
	       int a[n];
	       for(int i=0;i<n;i++)
	       {
	           cin>>a[i];
	       }

	       sort(a,a+n);
	       int l=0,r=n-1;
	       set<vector<int> >st;
	       for (int i = 0; i < n - 3; i++)
			{
				for (int j = i+1; j < n - 2; j++)
				{
					l = j + 1;
					r = n-1;
					while (l < r)
					{
						if( a[i] + a[j] + a[l] + a[r] == s)
						{
						   //printf("%d %d %d %d $ ", a[i], a[j],a[l], a[r]);
						   vector<int> vec;
						   vec.push_back(a[i]);
						   vec.push_back(a[j]);
						   vec.push_back(a[l]);
						   vec.push_back(a[r]);
						   st.insert(vec);
						   l++; r--;
						}
						else if (a[i] + a[j] + a[l] + a[r] < s)
							l++;
						else
							r--;
					}
				}
			}
			int flag=-1;
			set<vector<int> >::iterator it;
			for(it=st.begin();it!=st.end();it++)
			{
				flag=1;
				vector<int> i=*it;
				for(int j=0;j<i.size();j++)
					cout<<i[j]<<" ";
				cout<<"$";

			}
			if(flag==-1)
				cout<<flag;

			cout<<"\n";
	}
}
