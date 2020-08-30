#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool triplesum(int ar[],int n,int x)
{
    int sum=0;
    for(int i=0;i<n-2;i++)
    {
        int j=i+1,k=n-1;

        while(j<k)
        {
            sum=ar[i]+ar[j]+ar[k];
            if(sum==x)
                return true;
            else if(sum<x)
                j++;
            else
                k--;
        }
    }

    return false;
}

int main()
 {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    int ar[n];
	    for(int i=0;i<n;i++)
	        cin>>ar[i];
	        
        sort(ar,ar+n);
        cout<<triplesum(ar,n,x)<<"\n";
        
	}
	
	return 0;
}