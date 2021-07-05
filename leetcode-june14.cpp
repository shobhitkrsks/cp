#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int> v1, vector<int> v2)
{
    if (v1[1] > v2[1])
        return true;
    else if (v1[1] == v2[1])
        return v1[0] >= v2[0];
    else
        return false;
}

int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
{
    int n = boxTypes.size();
    sort(boxTypes.begin(), boxTypes.end(), comp);

    int maxUnits = 0;
    int boxes = 0, addboxes = 0;

    for (auto p = boxTypes.begin(); p != boxTypes.end(); p++)
    {
        addboxes = min(truckSize - boxes, p->at(0));
        maxUnits += addboxes * p->at(1);
        boxes += addboxes;

        if (boxes >= truckSize)
            break;
    }

    return maxUnits;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v;
    int b, u;
    for (int i = 0; i < n; i++)
    {
        cin >> b >> u;
        v.push_back(vector<int>{b, u});
    }

    int truckSize;
    cin >> truckSize;

    cout << maximumUnits(v, truckSize);

    return 0;
}