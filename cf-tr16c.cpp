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
        // map<pair<pair<int,int>,pair<int,int>>,bool> m;
        set<pair<pair<int,int>,pair<int,int>>> st;
        int time=0;
        int x=0,y=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='N')
            {
                if(st.find(make_pair(make_pair(x,y),make_pair(x,y+1)))==st.end())
                {
                    time+=5;
                    st.insert(make_pair(make_pair(x,y),make_pair(x,y+1)));
                    st.insert(make_pair(make_pair(x,y+1),make_pair(x,y)));
                }
                else
                {
                    time+=1;
                }
                y++;                
            }
            else if(s[i]=='S')
            {
                if(st.find(make_pair(make_pair(x,y),make_pair(x,y-1)))==st.end())
                {
                    time+=5;
                    st.insert(make_pair(make_pair(x,y),make_pair(x,y-1)));
                    st.insert(make_pair(make_pair(x,y-1),make_pair(x,y)));
                }
                else
                {
                    time+=1;
                }
                y--;
            }
            else if(s[i]=='W')
            {
                if (st.find(make_pair(make_pair(x, y), make_pair(x-1, y))) == st.end())
                {
                    time += 5;
                    st.insert(make_pair(make_pair(x, y), make_pair(x-1, y)));
                    st.insert(make_pair(make_pair(x-1, y), make_pair(x, y)));
                }
                else
                {
                    time += 1;
                }
                x--;
            }
            else if(s[i]=='E')
            {
                if(st.find(make_pair(make_pair(x,y),make_pair(x+1,y)))==st.end())
                {
                    time+=5;
                    st.insert(make_pair(make_pair(x,y),make_pair(x+1,y)));
                    st.insert(make_pair(make_pair(x+1,y),make_pair(x,y)));
                }
                else
                {
                    time+=1;
                }
                x++;
            }
        }

        cout<<time<<"\n";
    }

    return 0;
}