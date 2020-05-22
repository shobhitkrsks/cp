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
        int a[n],b[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++)
            cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);

        int i=0,left=0,right=n-1;
        while(i<k && left<n && right>=0)
        {
            if(a[left]<b[right])
            {
                i++;
                a[left]=b[right];
                left++;
                right--;
            }
            else
            {
                i=k;
                break;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];

        cout<<sum<<"\n";
    }

    return 0;
}