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
        cin>>n;
        int ar[n];
        int c5=0,c10=0,c15=0;

        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        bool flag=true;
        for(int i=0;i<n && flag;i++)
        {
            if(ar[i]==5)
                c5++;

            else if(ar[i]==10)
            {
                if(c5>=1)
                {
                    c5--;
                    c10++;
                }
                else
                {
                    flag=false;
                    break;
                }
                
            }
            else
            {
                if(c10>=1)
                {
                    c10--;
                    c15++;
                }
                else if(c5>=2)
                {
                    c5-=2;
                    c15++;
                }
                else
                {
                    flag=false;
                    break;
                }   
            }
        }

        if(flag)
            cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }

    return 0;
}