//aman kumar jha
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"enter the num of row\n";
	cin>>n;
	cout<<"enter the num of coloumn\n";
	cin>>m;
	for(int i=0;i<n;i++)
	{
		{
			for(int j=0;j<m;j++)
			{
				if(j>=n-1-i&&j<=i+n-1)
				{
					cout<<'#';
				}
				else
				{
					cout<<" ";
				}
			}
			cout<<"\n";
		}
   }
}
