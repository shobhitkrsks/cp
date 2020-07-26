#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
 {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int n;
	    ll k;
	    cin>>n>>k;
	    
	    ll ar[n];
	    for(int i=0;i<n;i++)
	        cin>>ar[i];
	        
        ll sum=0;
        int l=0,r=-1;
        bool flag=false;
        for(int i=0;i<n && !flag;i++)
        {
            if(sum==k)
            {
                r=i-1;
                flag=true;
                break;
            }
            
            sum+=ar[i];
        
            if(sum>k)
            {
                while(sum>k)
                {
                    sum-=ar[l];
                    l++;
                }
            }

            
        }

        if(sum==k && !flag)
        {
            flag=true;
            r=n-1;
        }
        
        if(flag)
            cout<<l<<" "<<r<<"\n";
        else
            cout<<"-1\n";
	}
	
	return 0;
}