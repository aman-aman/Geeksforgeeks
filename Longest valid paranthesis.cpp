#include<bits/stdc++.h>
using namespace std;
//aman kumar jha
int length(string str)
{
    int n=str.length();
    stack<int> stk;
    stk.push(-1);
    int result = 0;
    for (int i=0; i<n; i++)
    {
        if (str[i] == '(')
          stk.push(i);
        else
        {
            stk.pop();
            if (!stk.empty())
                result = max(result, i - stk.top());
            else stk.push(i);
        }
    }

    return result;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        cin>>s1;
        cout<<length(s1)<<"\n";
    }
}
