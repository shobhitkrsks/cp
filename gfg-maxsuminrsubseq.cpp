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
	    cin>>n;
	    
	    int ar[n];
	    for(int i=0;i<n;i++)
	        cin>>ar[i];
	        
        int msis[n];
        int maxsum=ar[0];
        msis[0]=ar[0];
        for(int i=1;i<n;i++)
        {
            msis[i]=ar[i];
            for(int j=0;j<i;j++)
            {
                if(ar[i]>=ar[j] && msis[j]+ar[i]>msis[i])
                {
                    msis[i]+=ar[j];
                }
            }
            
            if(msis[i]>maxsum)
                maxsum=msis[i];
        }
        
        cout<<maxsum<<"\n";
	}
	
	return 0;
}