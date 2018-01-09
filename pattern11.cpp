//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, s,n;
    cin>>n;
    int a=1;
    int b=n*n+1;
    for(i=n;i>=1;i--)
    {
        for(s=0;s<n-i;s++)
			printf("-");
        for(j=0;j<i;j++)
			printf("%d*", a++);
		for (k=0;k<i-1;k++)
			printf("%d*",b++);
        printf("%d\n", b);
		b-=2*(i-1);
    }
}

