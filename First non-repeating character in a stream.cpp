#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    char a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];

		vector<int> mp(26,0);
		queue<char> q;
		char ch='1';
		for(int i=0;i<n;i++)
		{
			mp[a[i]-'a']++;
			q.push(a[i]);
			while(!q.empty())
			{
			    if(mp[q.front()-'a']>1)
			        q.pop();
			    else
			    {
			        cout<<q.front()<<" ";
			        break;
			    }
			}
			if(q.empty())
			    cout<<-1<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
