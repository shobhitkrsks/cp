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
        ll a,b;
        cin>>a>>b;

        if(a==b)
            cout<<"0\n";
        else
        {
            ll x=max(a,b);
            ll y=min(a,b);

            if(x%y!=0)
                cout<<"-1\n";
            else
            {
                int cnt=0;
                bool flag=true;
                while(y!=x && x>y && flag)
                {
                    if(x>=y*8 )
                    {
                        y*=8;
                        cnt++;
                    }
                    else if(x>=y*4)
                    {
                        y*=4;
                        cnt++;
                    }
                    else if(x>=y*2)
                    {
                        y*=2;
                        cnt++;
                    }
                    else
                    {
                        flag=false;
                        break;
                    }

                    if(x%y!=0)
                    {
                        flag=false;
                        break;
                    }
                    
                }

                if(!flag)
                    cout<<"-1\n";
                else
                {
                    cout<<cnt<<"\n";
                }
                
            }
            
        }
        
        

        
        
    }

    return 0;
}