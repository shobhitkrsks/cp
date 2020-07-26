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

        for (int i = 0; i < n; i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<i*n+j+1<<" ";
                }
            }
            else
            {
                for(int j=0;j<n;j++)
                {
                    cout<<(i+1)*n-j<<" ";
                }
            }

            cout<<"\n";
        }
        
    }

    return 0;
}