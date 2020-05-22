#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
        int n,s;
        cin>>n>>s;

        if(n==s)
        {
            cout<<"NO\n";
        }
        else
        {
            int rest=s/n;
            int last=s-(n-1)*rest;
            bool found=false;
            int k=-1;

            for(int i=0;i<=s && !found;i++)
            {
                if(i%rest!=0 && (s-i)%rest!=0 && i!=last && (s-i)!=last && i!=(s-i))
                {
                    if(i-last<0)
                    {
                        if((s-i)-last<0)
                        {
                            found=true;
                            k=i;
                        }
                        else if(((s-i)-last)%rest!=0)
                        {
                            found=true;
                            k=i;
                        }
                    }
                    else
                    {
                        if((i-last)%rest!=0)
                        {
                            if((s-i)-last<0)
                            {
                                found=true;
                                k=i;
                            }
                            else if(((s-i)-last)%rest!=0)
                            {
                                found=true;
                                k=i;
                            }
                        }
                    }
                    
                }
            }

            if(!found)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
                for(int i=0;i<n-1;i++)
                {
                    cout<<rest<<" ";
                }
                cout<<last<<"\n";
                cout<<k<<"\n";
            }
            

        }
        
    

    return 0;
}