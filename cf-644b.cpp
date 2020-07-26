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
        for(int i=0;i<n;i++)
            cin>>ar[i];
        
        sort(ar,ar+n);

        int diff[n];
        diff[0]=INT_MAX;
        for(int i=1;i<n;i++)
        {
            diff[i]=ar[i]-ar[i-1];
        }
    

        cout<<*min_element(diff+1,diff+n)<<"\n";
    }

    return 0;
}