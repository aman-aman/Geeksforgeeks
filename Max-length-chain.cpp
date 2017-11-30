//aman kuamr jha


int maxChainLen(struct val p[],int n)
{
        int lis[n];
        for(int i=0;i<n;i++)
        {
            lis[i]=1;
        }
        vector<pair<int,int> > a;
        for(int i=0;i<n;i++)
        {
            a.push_back(make_pair(p[i].first,p[i].second));
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
        int val=*max_element(lis,lis+n);
        return val;
}
