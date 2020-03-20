#include <iostream>
#include<bits/stdc++.h>
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
		{
			char t;
			cin>>t;
			ar[i]=int(t-'0');
		}
		
		if(n==1)
			cout<<"-1\n";
		else
		{
			int i;
			for(i=n-1;i>=1;i--)
			{
				if(ar[i]>ar[i-1])
				break;
			}
			
			if(i==0)
				cout<<"-1\n";
			else
			{
				sort(ar+i,ar+n);
				
				int j;
				for(j=i;j<n;j++)
				{
					if(ar[j]>ar[i-1])
					break;
				}
				
				int t=ar[j];
				ar[j]=ar[i-1];
				ar[i-1]=t;
				
				sort(ar+i,ar+n);
				
				for(int k=0;k<n;k++)
				{
					cout<<ar[k];
				}
				cout<<endl;
			}
		}

		

	}
	
	return 0;
}
