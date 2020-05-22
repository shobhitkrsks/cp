#include<iostream>
#include<bits/stdc++.h>
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
        int row,col,k;
        cin>>row>>col>>k;
        row--;col--;

        int l,r,u,d;
        l=col-k;
        u=row-k;
        r=col+k;
        d=row+k;

        if(l<0)
            l=0;
        if(u<0)
            u=0;
        if(r>7)
            r=7;
        if(d>7)
            d=7;
        int sum=(r-l+1)*(d-u+1);
        cout<<sum<<endl;
    }
    // 8 16 24 32
    // 8 24 48 80
    return 0;
}