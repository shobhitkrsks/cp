#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ar[200001];

inline int signum(int n)
{
    if(n>0)
        return 1;
    else 
        return -1;
}

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
        for(int i=0;i<n;i++)
            cin>>ar[i];

        long long sum=0;

        int i;
        int sign=signum(ar[0]);
        int max=ar[0];
        for(i=1;i<n;i++)
        {
            if(signum(ar[i])==sign)
            {
                if(ar[i]>max)
                    max=ar[i];
            }
            else
            {
                sum+=max;
                sign=signum(ar[i]);
                max=ar[i];
            }
        }
        sum+=max;
        cout<<sum<<"\n";
    }

    return 0;
}