#include<bits/stdc++.h>
using namespace std;
int p=1e9+7;

int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts)
{
    horizontalCuts.push_back(0);
    horizontalCuts.push_back(h);

    verticalCuts.push_back(0);
    verticalCuts.push_back(w);

    sort(horizontalCuts.begin(), horizontalCuts.end());
    sort(verticalCuts.begin(), verticalCuts.end());

    int maxhor=0,maxver=0;
    int ITR=horizontalCuts.size();
    for(int i=0;i<ITR-1;i++)
    {
        maxhor=max(maxhor,horizontalCuts[i+1]-horizontalCuts[i]);
    }
    ITR=verticalCuts.size();
    for(int i=0;i<ITR-1;i++)
    {
        maxver=max(maxver,verticalCuts[i+1]-verticalCuts[i]);
    }

    return ((maxhor%p)*(maxver%p))%p;
}

int main()
{
    int h,w;
    cin>>h>>w;
    vector<int> horizontal, vertical;

    int hc,vc;
    cin>>hc>>vc;
    int t;
    for(int i=0;i<hc;i++)
    {
        cin>>t;
        horizontal.push_back(t);
    }
    for(int i=0;i<vc;i++)
    {
        cin>>t;
        vertical.push_back(t);
    }

    cout<<maxArea(h,w,horizontal,vertical);


}