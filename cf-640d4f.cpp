#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        int n0,n1,n2;
        cin>>n0>>n1>>n2;
        string s="";
        int l=0;
        
        if(n0!=0)
        {
            for(int i=0;i<=n0;i++,l++)
                s+='0';
        }

         
        if(n1!=0)
        {
            if(n0==0)
            {
                s='0';
                l=1;
            }
            string t="";

            for(int i=1;i<n1;i++)
            {
                if(i%2==1)
                    t+='1';
                else
                {
                    t+='0';
                }
            }

            s+=t;

            if(n1%2==1)
            {
                s+='1';
            }
            else
            {
                s='1'+s;
            }
            
        }
        
        if(n2!=0)
        {
            l=s.length();
            if(l==0)
            {
                s='1';
                l=1;
            }
            
            if(s[0]=='1')
            {
                string t="";
                for(int i=1;i<=n2;i++)
                    t+='1';

                s=t+s;
            }
            else if(s[l-1]=='1')
            {
                string t="";
                for(int i=1;i<=n2;i++)
                    t+='1';

                s+=t;
            }                   
        }
        cout<<s<<"\n";
        
        
    }

    return 0;
}