#include<bits/stdc++.h>
using namespace std;
int a[10]={0,1,11,111,1111,11111,111111,1111111,11111111,111111111};

void printdigit(int start,string s,int d)
{
    if(d==0)
    {
        cout<<s<<" ";
        return;
    }
    for(int i=start;i<=9;i++)
    {
        string str=s+to_string(i);
        printdigit(i+1,str,d-1);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        string s;
        printdigit(1,"",d);
        cout<<"\n";
    }
}
