#include<bits/stdc++.h>
using namespace std;
bool isnum(char a)
{
    if(a>='0'&&a<='9')
        return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,ans;
        int prev=0;
        cin>>s;
        stack<char> st;
        stack<int> stnum;
        for(int i=0;i<s.length();i++)
        {

            if(s[i]==']')
            {
                prev=0;
                string str="";
                while(st.top()!='[')
                {
                    str+=st.top();
                    st.pop();
                }
                st.pop();
                reverse(str.begin(),str.end());
                int n=stnum.top();
                stnum.pop();
                string s1;

                for(int i=0;i<n;i++)
                    s1+=str;

                for(int i=0;i<s1.length();i++)
                    st.push(s1[i]);
                ans=s1;
                //cout<<s1<<"\n";
                str="";
                s1="";
            }
            else if(isnum(s[i]))
            {
                stnum.push(10*prev+s[i]-'0');
                //cout<<"int"<<(s[i]-'0')<<"\n";
                prev=s[i]-'0';
            }
            else if(!isnum(s[i]))
            {
                prev=0;
                st.push(s[i]);
            }
        }
        cout<<ans<<"\n";
    }
}
