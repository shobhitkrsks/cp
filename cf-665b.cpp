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
        int x1,y1,z1,x2,y2,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        int sum=0;

        if(z1>=y2)
        {
            sum+=2*(z1-y2);
            z1-=y2;
            y2=0;

            
        }
        else
        {
            sum+=2*(z1);
            z1=0;
            y2-=z1;
        }

        if()
        


    }

    return 0;
}