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

        map<int,int> x;
        map<int,int> y;

        int X,Y;

        n=(4*n)-1;
        for(int i=0;i<n;i++)
        {
            cin>>X>>Y;

            if(x.find(X)==x.end())
            {
                x.insert(make_pair(X,1));
            }
            else
            {
                x[X]++;
            }

            if(y.find(Y)==y.end())
            {
                y.insert(make_pair(Y,1));
            }
            else
            {
                y[Y]++;
            }
        }

        int mx=-1,my=-1;
        for(auto i:x)
        {
            if(i.second%2!=0)
            {
                mx=i.first;
                break;
            }
        }

        for(auto i:y)
        {
            if(i.second%2!=0)
            {
                my=i.first;
                break;
            }
        }

        cout<<mx<<" "<<my<<"\n";
    }

    return 0;
}