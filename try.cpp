#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
			cin>>ar[i];

		int sb=0,sv=0;
		int start=0,end=n-1;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				if(ar[start]>=ar[end])
				{
					sb+=ar[start];
					start++;
				}
				else
				{
					sb+=ar[end];
					end--;
				}
			}
			else
			{
				if(ar[start]>=ar[end])
				{
					sv+=ar[start];
					start++;
				}
				else
				{
					sv+=ar[end];
					end--;
				}
			}
		}
		if(sb>sv)
			cout<<"true"<<endl;
		else
			cout<<"false"<<endl;
	}
	return 0;
}
