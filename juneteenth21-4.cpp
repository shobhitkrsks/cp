#include<bits/stdc++.h>
using namespace std;

bool flag=false;
int n;
string res="";

void constructStringUtil(string s, int len, int remainingSum, vector<vector<int>>& cost)
{
    if(!flag)
    {
        if(remainingSum==0)
        {
            res=s;
            flag=true;
            return;
        }
        else
        {
            for(int i=0;i<n && !flag;i++)
            {
                if(remainingSum-cost[s[len-1]-'a'][i]>=0)
                    constructStringUtil(s+char('a'+i), len+1, remainingSum-cost[s[len-1]-'a'][i], cost);
            }
        }

    }
}

string constructString(int k, vector<vector<int>> cost)
{
    string s="";

    for(int i=0;i<n && !flag;i++)
    {
        char c='a'+i;
        constructStringUtil(s+c, 1, k, cost);
    }

    return res;
}

int main()
{
    int k, x;
    cin>>k>>n;
    vector<vector<int>> cost;
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            temp.push_back(x);
        }
        cost.push_back(temp);
    }

    cout<<constructString(k, cost);
    
    return 0;
}