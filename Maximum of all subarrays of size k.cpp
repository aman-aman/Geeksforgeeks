#include <bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& a, int k)
    {
        deque<int> dq;
        vector<int> res;
        int n=a.size();
        if(n==0)
            return res;
        for(int i=0;i<k;i++)
        {
            while(!dq.empty()&&a[i]>=a[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }

        for(int i=k;i<n;i++)
        {
            res.push_back(a[dq.front()]);
            while(!dq.empty()&&dq.front()<=i-k)
                dq.pop_front();

            while(!dq.empty()&&a[i]>=a[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        res.push_back(a[dq.front()]);

        return res;

    }
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,val;
	    cin>>n>>k;
	    vector<int> a,res;
	    for(int i=0;i<n;i++)
	        {
	            cin>>val;
	            a.push_back(val);
	        }
	   res=maxSlidingWindow(a,k);
	   for(int i=0;i<res.size();i++)
	    cout<<res[i]<<" ";

	   cout<<"\n";

	}
}
