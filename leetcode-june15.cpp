#include <bits/stdc++.h>
using namespace std;

bool bfs(vector<int>& matchsticks, int s1, int s2, int s3, int s4, int curIdx)
{
    if(s1==0 && s2==0 && s3==0 && s4==0)
        return true;

    if(s1<0 || s2<0 || s3<0 || s4<0)
        return false;

    if(curIdx<0)
        return true;

    return bfs(matchsticks, s1-matchsticks[curIdx], s2, s3, s4, curIdx-1) || bfs(matchsticks, s1, s2-matchsticks[curIdx], s3, s4, curIdx-1) || bfs(matchsticks, s1, s2, s3-matchsticks[curIdx], s4, curIdx-1) || bfs(matchsticks, s1, s2, s3, s4-matchsticks[curIdx], curIdx-1);
}

bool makesquare(vector<int> &matchsticks)
{
    int n=matchsticks.size();
    
    if(n<4)
        return false;

    int sum=0;
    for(int i=0;i<n;i++)
        sum+=matchsticks[i];

    if(sum%4!=0)
        return false;

    int side=sum/4;
    sort(matchsticks.begin(), matchsticks.end());

    if(matchsticks[n-1]>side)
        return false;

    return bfs(matchsticks,side,side,side,side,n-1);  
}

int main()
{
    int n;
    cin >> n;
    vector<int> matchSticks;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        matchSticks.push_back(t);
    }

    cout << makesquare(matchSticks);

    return 0;
}