//aman kumar jha
/*
To print the pattern like for n=3
the program should print
1 1 1 2
3 2 2 2
3 3 3 4
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;

    int k=1,temp=n;
    for(int i=1;i<=n;i++)
    {
        int j=1;
        k=i;
        temp=n;
        if(i%2==1)
        {
            while(temp--)
                cout<<k<<" ";
            k++;
            cout<<k<<" ";
        }
        else
        {

            cout<<k<<" ";
            k--;
            while(temp--)
                cout<<k<<" ";
        }
        cout<<"\n";
    }
}
