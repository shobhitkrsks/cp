#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        char c[n];
        cin>>c;
        
        int ar[26][2];
        
        for(int i=0;i<26;i++)
        {
        	ar[i][0]=-1;
        	ar[i][1]=0;
		}
		
		for(int i=0;i<n;i++)
		{
			if(ar[c[i]-'a'][0]==-1)
			{
				ar[c[i]-'a'][0]=i;
				ar[c[i]-'a'][1]++;
			}
			else
				ar[c[i]-'a'][1]++;
		}
		
		int first=n+1;
		for(int i=0;i<26;i++)
		{
			if(ar[i][0]!=-1 && ar[i][0]<first)
			{
				if(ar[i][1]==1)
				{
					first=ar[i][0];
				}
			}
		}
		
		if(first==n+1)
		cout<<"-1\n";
		else
		cout<<c[first]<<endl;
	}
    return 0;
}
