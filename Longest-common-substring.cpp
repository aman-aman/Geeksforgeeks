#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int> > a;
        int v1,v2;
        vector<int> lis(n,1);
        for(int i=0;i<n;i++)
        {
            cin>>v1>>v2;
            a.push_back(make_pair(v1,v2));
        }

        sort(a.begin(),a.end());

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i].first>a[j].second&&lis[i]<lis[j]+1)
                {
                    lis[i]=lis[j]+1;
                }
            }
        }
        cout<<*max_element(lis.begin(),lis.end())<<"\n";
    }
}
