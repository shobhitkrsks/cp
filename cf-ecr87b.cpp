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
        string s;
        cin>>s;
        int l=s.length();
        int p1=-1,p2=-1,p3=-1;
        int mini=INT_MAX;
        int x;
        for(int i=0;i<l;i++)
        {
            switch(s[i])
            {
                case '1':
                    p1=i;break;
                case '2':
                    p2=i;break;
                case '3':
                    p3=i;break;
            }

            if(p1!=-1 && p2!=-1 && p3!=-1)
            {
                x=max(p1,max(p2,p3))-min(p1,min(p2,p3))+1;
                if(x<mini)
                    mini=x;
            }
        }

        if(mini!=INT_MAX)
            cout<<mini<<"\n";
        else
        {
            cout<<"0\n";
        }
        
    }

    return 0;
}