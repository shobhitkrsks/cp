#include <iostream>
#include<bits/stdc++.h>
#include<cstring>
#include<vector>
using namespace std;

long long int fact(int n)
{
	if(n==0 || n==1)
	return 1;
	else return n*fact(n-1);
}

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        char c[20];
        cin>>c;
        int l=strlen(c);
                
        vector<char> s;
        s.assign(c,c+l);
        
        sort(s.begin(),s.end());
        
        int flag=0;
        long long int count=0;
        
        for(int i=0;i<l-1;i++)
        {
        	if(s[i]==s[i+1])
        		flag=1;
		}
		
		if(flag)
			cout<<0<<endl;
		else
		{        
	        int i,j;
	        for(i=0;i<l;i++)
	        {
	        	for(j=0;j<s.size();j++)
	        	{
	        		if(c[i]==s[j])
	        			break;
				}
				
				int ltc=j;
				vector<char>::iterator k;
				k=s.begin()+j;
				s.erase(k);
				
				count+=j*fact(s.size());
				if(count>=1000003)	
					count=count%1000003;	
			}
			cout<<count+1<<endl;
		}
        
		
    }

	return 0;
}
