#include<iostream>
#include<bits/stdc++.h>
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
        string t;
        cin>>t;
        int lt=t.length();
        string s="";
        int c0=0,c1=0;
        for(int i=0;i<lt;i++)
        {
            if(t[i]=='0')
                c0++;
            else
                c1++;
        }
        if(c0==0 || c1==0)
        {
            cout<<t<<"\n";
        }
        else
        {
            s+=t[0];
            for(int i=1;i<lt;i++)
            {
                if(s[i-1]=='0')
                    s+='1';
                else
                {
                    s+='0';
                }
                
            }
            if(s==t)
                cout<<s<<"\n";
            else
            {
                for(int i=lt;i<2*lt;i++)
                {
                    if(s[i-1]=='0')
                        s+='1';
                    else
                        s+='0';
                }
                cout<<s<<"\n";
            }
            
        }
        

    }

    return 0;
}