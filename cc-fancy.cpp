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
    string eol;
    getline(cin,eol);
    while(tc--)
    {
        string s;
        getline(cin,s);
        istringstream ss(s);
        string t;
        bool flag=1;
        while(ss>>t)
        {
            if(t=="not")
            {
                flag=0;
                break;
            }
        }
        if(flag)
        cout<<"regularly fancy\n";
        else
        {
            cout<<"Real Fancy\n";
        }
        
    
    }

    return 0;
}