#include<bits/stdc++.h>
using namespace std;
bool comp(string a,string b)
{
    return a+b>b+a;
    /*int i=0,j=0;
    while(i<a.length()&&j<b.length())
    {
        if(a[i]>b[j])
            return true;
        else if(a[i]==b[j])
        {
            i++;
            j++;
        }
        else
            return false;
    }
    while(i<a.length())
    {
        if(a[i]<b[j-1])
            return false;
        return true;
    }
    while(j<b.length())
    {
        if(b[j]<a[i-1])
            return true;
        return false;
    }*/
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        vector<string> a;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            a.push_back(s);
        }
        sort(a.begin(),a.end(),comp);
        for(auto x:a)
            cout<<x;
        cout<<"\n";
    }
}
