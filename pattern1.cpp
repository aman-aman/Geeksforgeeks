//aman kumar jha
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the num of row\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		{
			for(int j=0;j<n;j++)
			{
				if(i+j<n-1)
				{
					cout<<" ";
				}
				else
				{
					cout<<'#';
				}
			}
			cout<<"\n";
		}
   }
}
