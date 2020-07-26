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
        int ar[n+1];
        ar[0]=0;
        for(int i=1;i<=n;i++)
            cin>>ar[i];

        sort(ar,ar+n+1);
        int ng=1;

        /*
        for(int i=1;i<=n;i++)
        {
            if(ar[i]<=i)
            {
                ng++;
            }
            else
            {
                int j=i;
                int high=ar[i];
                while(j<=n && j<=high)
                {
                    if(ar[j]>high)
                        high=ar[j];

                    j++;
                }
                j--;
                if(ar[j]==j)
                    ng+=j-i+1;

                i=j;
            }
            
        }
        */

        int z=0;
        for(int i=1;i<=n;i++)
        {
            if(ar[i]<=i)
                z=i;
        }
        ng+=z;

        cout<<ng<<"\n";
    }

    return 0;
}