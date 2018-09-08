#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int distinct=0;
        string s;
        cin>>s;
        vector<int> vec(26,0);
        for(int i=0;i<s.length();i++)
        {
            vec[s[i]-'a']=1;
        }
        for(int i=0;i<26;i++)
        {
            if(vec[i]>0)
                distinct++;
        }
        int start=-1;
        for(int i=0;i<26;i++)
            vec[i]=0;

        int count=0,minlen=INT_MAX;
        for(int i=0;i<s.length();i++)
        {
            vec[s[i]-'a']++;
            if(vec[s[i]-'a']==1)
            {
                count++;
            }
            if(count==distinct)
            {
                while(vec[s[start]-'a']>1)
                {
                    if(vec[s[start]-'a']>1)
                        vec[s[start]-'a']--;
                    start++;
                }
                int len=i-start+1;
                if(minlen>len)
                    minlen=len;
            }
        }

        cout<<minlen<<"\n";
    }
}
