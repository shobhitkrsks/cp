#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<unordered_set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        
        map<int,vector<int>> mp;
        int ar[m];
        for(int i=0;i<m;i++)
        {
            cin>>ar[i];
            if(mp.find(ar[i])==mp.end())
            {
                vector<int> v;
                v.push_back(i);
                mp.insert(pair<int,vector<int>>(ar[i],v));
            }
            else
            {
                mp[ar[i]].push_back(i);
            }
        }

        for(auto i:mp)
        {
            cout<<i.first<<" - ";
            for(auto j:i.second)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }

        int count=0;
        unordered_set<int> frmbuf;
        for(int i=0;i<m;i++)
        {
            if(frmbuf.find(ar[i])!=frmbuf.end())
            {
                mp[ar[i]].erase(mp[ar[i]].begin());
            }
            else
            {
                if(frmbuf.size()<n)
                {
                    frmbuf.insert(ar[i]);
                    mp[ar[i]].erase(mp[ar[i]].begin());
                    count++;  
                }
                else(frmbuf.size()==n)
                {
                    bool empty;
                    int maxindex=-1,maxfrmnum;
                    for(auto j:frmbuf)
                    {
                        if(mp[j].empty())
                        {
                            empty=true;
                            maxfrmnum=j;
                            break;
                        }
                        else
                        {
                            if(mp[j].front()>maxindex)
                            {
                                maxindex=mp[j].front();
                                maxfrmnum=j;
                            }
                        }
                    }

                    count++;
                    frmbuf.erase(frmbuf.find(maxfrmnum));
                    frmbuf.insert(ar[i]);
                    count++;
                    //if(empty)
                    //{
                        mp[ar[i]].erase(mp[ar[i]].begin());
                    //}
                }
            }
        }
        cout<<count<<endl;
    }
}