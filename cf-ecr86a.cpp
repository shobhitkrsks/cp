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
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        long long c1,c2,c3;
        c1=(ll)(max(x,y)-min(x,y))*(ll)a+(ll)min(x,y)*(ll)b;
        c2=(ll)(x+y)*(ll)a;
        c3=(ll)max(x,y)*(ll)b+(ll)abs(x-y)*(ll)a;
        cout<<min(c1,min(c2,c3))<<"\n";
    }

    return 0;
}