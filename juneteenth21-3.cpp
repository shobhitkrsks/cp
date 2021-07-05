#include<bits/stdc++.h>
using namespace std;

vector<int> fillBarrels(vector<int> A, vector<int> B, int X) {
    int n=A.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    vector<int> res;

    int totalSum=0;
    for(int i=0;i<n;i++)
        totalSum+=A[i]+B[i];

    int maxPairsum=-1;
    for(int i=n-1;i>=0;i--)
    {
        maxPairsum=max(maxPairsum, A[i]+B[n-1-i]);
    }

    if(maxPairsum<=X)
    {
        res.push_back(1);
        res.push_back(n*X - totalSum);
    }
    else
    {
        res.push_back(-1);
        res.push_back(maxPairsum);
    }

    return res;
}

int main()
{
    
    
    return 0;
}