#include <iostream>
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
        int n,m;
        cin>>n>>m;
        
        multiset<int,greater<int>> s;
        int t;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            s.insert(t);
        }

        int count=0;
        bool flag=true;
        for(int i=1;i<m && flag;i++)
        {
            if(s.find(i)==s.end())
            {
                flag=false;
            }
            else
            {
                while(s.find(i)!=s.end())
                {
                    count++;
                    s.erase(s.find(i));
                }
            }
        }

        if(!flag)
            cout<<"-1\n";
        else
        {
            if(s.find(m)==s.end())
                count+=s.size();
            else
            {
                while(!s.empty() && s.find(m)!=s.end())
                    s.erase(s.find(m));

                count+=s.size();
            }
            cout<<count<<"\n";

            
        }

        
    }
	return 0;
}
