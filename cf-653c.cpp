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
        string c;
        cin>>c;

        stack<char> s;
        for(int i=0;i<n;i++)
        {
            if(s.empty())
                s.push(c[i]);
            else
            {
                if(c[i]=='(')
                {
                    s.push(c[i]);
                }
                else
                {
                    if(s.top()=='(')
                        s.pop();
                    else
                        s.push(c[i]);
                }
                
            }
        }

        cout<<s.size()/2<<"\n";
    }

    return 0;
}