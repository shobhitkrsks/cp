#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,b,m;
        cin>>n>>b>>m;
        
        int ar[m];
        for(int i=0;i<m;i++)
            cin>>ar[i];
            
        int c=1;
        int l=ar[0]/b;
        
        for(int i=1;i<m;i++)
        {
            if(ar[i]/b!=l)
            {
                c++;
                l=ar[i]/b;
            }
        }
        
        cout<<c<<"\n";
    }
	return 0;
}
