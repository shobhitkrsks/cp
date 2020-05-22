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
        int n,k;
        cin>>n>>k;

        if(n%2==1)
        {
            if(k%2==0 || n<k)
                cout<<"NO\n";

            else
            {
                cout<<"YES\n";
                for(int i=0;i<k-1;i++)
                    cout<<"1 ";
                cout<<n-k+1<<"\n";
            }
        }
        else
        {
            if(k%2==1)
            {
                if(n<2*k)
                    cout<<"NO\n";

                else
                {
                    cout<<"YES\n";
                    for(int i=0;i<k-1;i++)
                        cout<<"2 ";

                    cout<<n-2*(k-1)<<"\n";
                }                
            }
            else
            {
                if(n<k)
                    cout<<"NO\n";

                else
                {
                    cout<<"YES\n";
                    for(int i=0;i<k-1;i++)
                        cout<<"1 ";
                    cout<<n-k+1<<"\n";
                }
                
            }
        }
        
    }

    return 0;
}