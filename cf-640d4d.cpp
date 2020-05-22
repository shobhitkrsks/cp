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

        int prevam=ar[0];
        int alice=ar[0],bob=0;
        int left=1,right=n-1;
        int t;
        int move=1;
        while(left<=right)
        {
            if(move%2==1)
            {
                t=ar[right];
                right--;
                while(right>=left && t<=prevam)
                {
                    t+=ar[right];
                    right--;
                }
                move++;
                bob+=t;
                prevam=t;
            }
            else if(move%2==0)
            {
                t=ar[left];
                left++;
                while(left<=right && t<=prevam)
                {
                    t+=ar[left];
                    left++;
                }
                move++;
                alice+=t;
                prevam=t;
            }

        }
            cout<<move<<" "<<alice<<" "<<bob<<"\n";

    }

    return 0;
}