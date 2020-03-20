#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int m,x,y;
        cin>>m>>x>>y;
        
        int h[101];
        memset(h,1,sizeof(h));
        
        int c[m];
        for(int i=0;i<m;i++)
        {
            cin>>c[i];
        }

        for(int i=0;i<m;i++)
        {
            for(int j=c[i];j>=1 && j>=(c[i]-x*y);j--)
                h[j]=0;
                
            for(int j=c[i];j<=100 && j<=(c[i]+x*y);j++)
                h[j]=0;
        }
        
        int count=0;
        for(int i=1;i<=100;i++)
        {
            if(h[i])
                count++;
        }
        
        cout<<count<<"\n";
        
    }
    
	return 0;
}

