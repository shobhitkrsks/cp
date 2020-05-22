#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,q;
        cin>>a>>b>>q;
        long long maxi,mini;
        maxi=max(a,b);
        mini=min(a,b);
        long long g=__gcd(a,b);
        long long q1,q2,l,result;
        l=(a*b)/g;

        if(maxi%mini==0)
        {
            for(int i=0;i<q;i++)
            {
                cin>>q1>>q2;
                cout<<"0 ";
            }

            cout<<"\n";
        }
        else
        {
            for(int i=0;i<q;i++)
            {
                result=0;

                cin>>sq1>>q2;
                result+=min(l-maxi,l-(q1%l));
                result+=max((ll)0,(q2%l)-maxi+1);

                result+=((q2/l)-((q1/l)+1))*(l-maxi);
                cout<<result<<" ";
            }
                cout<<"\n";

        }
        
        
    }

    return 0;
}